# Bit Manipulation

An algorithmic operation known as **bit manipulation** involves the manipulation of bits at the bit level (bitwise). Bit manipulation is all about these bitwise operations. They improve the efficiency of programs by being primitive, fast actions.

## Basic Understanding of how C++ compilers assign bits to memory

There are different data types that occupy different size of memory.

The following diagram shows 8 bits (1 byte) memory.

```mermaid
graph LR
    A[Bit 7 ] --- B[Bit 6]
    B --- C[Bit 5]
    C --- D[Bit 4]
    D --- E[Bit 3]
    E --- F[Bit 2]
    F --- G[Bit 1]
    G --- H[Bit 0]
```

The left most bit is the Most Significant Bit (MSB) and the right most bit is the Least Significant Bit (LSB).

The MSB is also a sign bit in signed data type.

## Endianness

**Endianness** is the order or sequence of bytes of a word of digital data in memory.

Endianness is primarily expressed as big-endian (BE) or little-endian (LE). 

- A big-endian system stores the most significant byte of a word at the smallest memory address and the least significant byte at the largest. 
- A little-endian system, in contrast, stores the least-significant byte at the smallest address.

Bi-endianness is a feature supported by numerous computer architectures that feature switchable endianness in data fetches and stores or for instruction fetches. 

Other orderings are generically called middle-endian or mixed-endian.

These two diagrams show how two computers using different endianness store a 32-bit (four byte) integer with the value of 0x0A0B0C0D. 

```mermaid
graph TD
	subgraph BIGENDIAN
    A[0A] --- B[0B]
    B --- C[0C]
    C --- D[0D]
    end
    
	subgraph LITTLE ENDIAN
    A1[0D] --- B1[0C]
    B1 --- C1[0B]
    C1 --- D1[0A]
    end
    
subgraph MEMORY ADDRESS
    A2[a] --- B2[a+1]
    B2 --- C2[a+2]
    C2 --- D2[a+3]
    end
```

In both cases, the integer is broken into four bytes, 0x0A, 0x0B, 0x0C, and 0x0D, and the bytes are stored in four sequential byte locations in memory, starting with the memory location with address a, then a + 1, a + 2, and a + 3. 

The difference between big- and little-endian is the order of the four bytes of the integer being stored.

The right-side diagram shows a computer using big-endian. This starts the storing of the integer with the most-significant byte, 0x0A, at address a, and ends with the least-significant byte, 0x0D, at address a + 3.

The left-side diagram shows a computer using little-endian. This starts the storing of the integer with the least-significant byte, 0x0D, at address a, and ends with the most-significant byte, 0x0A, at address a + 3.

Since each computer uses its same endianness to both store and retrieve the integer, the results will be the same for both computers. Issues may arise when memory is addressed by bytes instead of integers, or when memory contents are transmitted between computers with different endianness.

Big-endianness is the dominant ordering in networking protocols, such as in the Internet protocol suite, where it is referred to as network order, transmitting the most significant byte first. Conversely, little-endianness is the dominant ordering for processor architectures (x86, most ARM implementations, base RISC-V implementations) and their associated memory.

### Fun Fact::

In the 1726 novel Gulliver's Travels, he portrays the conflict between sects of Lilliputians divided into those breaking the shell of a boiled egg from the big end or from the little end. Because the emperor's son had cut his finger while opening an egg from the big end, doing so was prohibited by an imperial edict; those who rebelled and did so were called "Big-Endians" (Swift did not use the term Little-Endians in the work).

## Signed 8-Bit Integers

```cpp
int8_t a = 97;
//Same as char a = 97; or signed char a = 97
```

The binary equivalent of `97` is : `01100001`

So variable `a` is stored in memory like this.

```mermaid
graph LR
    A[0] --- B[1]
    B --- C[1]
    C --- D[0]
    D --- E[0]
    E --- F[0]
    F --- G[0]
    G --- H[1]
```

And when we retrieve the value from the memory it gets converted to its desired value.

 $0^{7}$ +  $2^{6}$ +  $2^{5}$ +  $0^{4}$ +  $0^{3}$ +  $0^{2}$ +  $0^{1}$ +  $2^{0}$  = 97
 
 It is a signed bit, so the left most bit is the sign bit. It is 0 which means positive.
 
 Lets say if the left most bit was `1` like below.
 
 ```mermaid
graph LR
    A[1] --- B[1]
    B --- C[1]
    C --- D[0]
    D --- E[0]
    E --- F[0]
    F --- G[0]
    G --- H[1]
```

Then the sign is negative like this.

 -$2^{7}$ +  $2^{6}$ +  $2^{5}$ +  $0^{4}$ +  $0^{3}$ +  $0^{2}$ +  $0^{1}$ +  $2^{0}$  = -31
 
 ### 8-bit Integer implicit type conversion
 
 ```cpp
int8_t a = 97;
std::cout << a;
```

Output:

```cpp
a
```

Here we can see that the output is not `97` but `a`. This is because the compiler implicitly converts any 8 bit data type which has integer into their equivalent ASCII value.

We can avoid that by using `static_cast` and converting 8 bit data type to any other higher bit data type.

```cpp
int8_t a= 97;
std::cout << static_cast<int>(a);
```

Output:

```cpp
97
```

## Unsigned 8-Bit Integers

The only difference unsigned integers have is that MSB doesn't represent a sign bit.

```cpp
uint8_t a = 97;
//Same as unsigned char a = 97
```

The binary equivalent of `97` is : `01100001`

So variable `a` is stored in memory like this.

```mermaid
graph LR
    A[0] --- B[1]
    B --- C[1]
    C --- D[0]
    D --- E[0]
    E --- F[0]
    F --- G[0]
    G --- H[1]
```

And when we retrieve the value from the memory it gets converted to its desired value.

 $0^{7}$ +  $2^{6}$ +  $2^{5}$ +  $0^{4}$ +  $0^{3}$ +  $0^{2}$ +  $0^{1}$ +  $2^{0}$  = 97
 
 Lets say if the left most bit was `1` like below.
 
 ```mermaid
graph LR
    A[1] --- B[1]
    B --- C[1]
    C --- D[0]
    D --- E[0]
    E --- F[0]
    F --- G[0]
    G --- H[1]
```

The sign is not negative. So the value differs.

 $2^{7}$ +  $2^{6}$ +  $2^{5}$ +  $0^{4}$ +  $0^{3}$ +  $0^{2}$ +  $0^{1}$ +  $2^{0}$  = 225
 
 ## Other data types
 
 
| Data Type       | Size in 32-bit System | Size in 64-bit System |
|-----------------|----------------------|----------------------|
| `char`          | 1 byte               | 1 byte               |
| `short`         | 2 bytes              | 2 bytes              |
| `int`           | 4 bytes              | 4 bytes              |
| `long`          | 4 bytes              | 8 bytes              |
| `long long`     | 8 bytes              | 8 bytes              |
| `float`         | 4 bytes              | 4 bytes              |
| `double`        | 8 bytes              | 8 bytes              |
| `long double`   | 8 bytes              | 16 bytes             |
| `bool`          | 1 byte               | 1 byte               |

## Integer Promotion

Integer promotion is the implicit conversion of a value of any integer type with rank less or equal to rank of `int` or of a bit-field of type `_Bool`, `int`, `signed int`, `unsigned int`, to the value of type `int` or `unsigned int`.

If `int` can represent the entire range of values of the original type (or the range of values of the original bit-field), the value is converted to type `int`. Otherwise the value is converted to `unsigned  int`.

Note: integer promotions are applied only


-   as part of  _usual arithmetic conversions_ 
-   as part of  _default argument promotions_
-   to the operand of the unary arithmetic operators  `+`  and  `-`
-   to the operand of the unary bitwise operator  `~`
-   to both operands of the shift operators  `<<`  and  `>>`

### Ranking

- the ranks of all signed integer types are different and increase with their precision: rank of  `signed  char`  < rank of  `short`  < rank of  `int`  < rank of  `long  int`  < rank of  `long  long  int`

- the ranks of all signed integer types equal the ranks of the corresponding unsigned integer types

- the rank of any standard integer type is greater than the rank of any extended integer type of the same size (that is, rank of  `__int64`  < rank of  `long  long  int`, but rank of  `long  long`  < rank of  `__int128`  due to the rule  (1))
	
- rank of  `char`  equals rank of  `signed  char`  and rank of  `unsigned  char`

- the rank of  `_Bool`  is less than the rank of any other standard integer type

## Implicit Conversions

When an expression is used in the context where a value of a different type is expected, conversion may occur:

- In the assignment operator, the value of the right-hand operand is converted to the unqualified type of the left-hand operand.

For example::

```cpp
int a = 2.5;
//a gets converted to 2

float b = 2;
//gets converted to 2.0

int c = true;
//gets converted to 1

bool d = 25;
//gets converted to 1
```

- In a function-call expression, to a function that has a prototype, the value of each argument expression is converted to the type of the unqualified declared types of the corresponding parameter

For example::

```cpp
int add_nums(int a, int b, int c){
	return a + b + c;
}

int main(){
int sum = add_nums(2, 'c', true); 
// add_nums is called with three ints: (2, 99, 1)
}
```

- In a return statement, the value of the operand of return is converted to an object having the return type of the function

For example:

```cpp
int num(){
	return 5.55;
}

int main(){
std::cout << num();
// 5.55 gets converted to 5
}
```

### Usual arithmetic conversions

The arguments of the following arithmetic operators undergo implicit conversions for the purpose of obtaining the common real type, which is the type in which the calculation is performed:

- binary arithmetic `*`, `/`, `%`, `+`, `-`
- relational operators `<`,`>`, `<=`, `>=`, `==`, `!=`
- binary bitwise arithmetic :: `&`, `^`, `|`, `~`
- conditional operator `?` `:`
