# Pointers

Pointers are variables that store the memory address of other variables

## Getting Started

**&** operator gives the memory address of the variable.

For example:
```cpp
int a = 20;
std::cout << &a;
```

The above code outputs some address in hexadecimal.  `0x7ffefae2ef2c` 

**Dereference Operator** $(*)$ :  An interesting property of pointers is that they can be used to access the variable they point to directly. This is done by preceding the pointer name with the dereference operator (*).

For example:
int a = 20;
int *aptr = &a;
std::cout << *aptr;
```

The above code outputs value stored at `aptr` i.e.  `20`

## Changing values using pointers

We can update the values in a variable by using pointers.

Normally we change the value in a variable by declarling like this.

```cpp
int a=20;
a=30;
```

However, we can also update the value of a variable using pointers like this.
```cpp
int a=20;
int *aptr = &a;
*aptr = 30;
```

## Pointer Arithmetic
We can perform basic operations (addition and subtraction) on a pointer.

The diagram below represnts a block of memory. Each block represents a single byte of memory.
```mermaid
%%{init: {'theme': 'default'}}%%
graph LR;
    A[0] --- B[1]
    B --- C[2]
    C --- D[3]
    D --- E[4]
    E --- F[5]
    F --- G[6]
    G --- H[7]
```

Let us say we store a integer in a variable.

```cpp
int a = 20;
```
Integer occupies 4 bytes of memory. So the variable `a` occupies 4 bytes of memory.

```mermaid
graph LR;
    subgraph Integer Occupied Memory
        A[0] --- B[1]
        B --- C[2]
        C --- D[3]
    end
    
    D --- E[4]
    E --- F[5]
    F --- G[6]
    G --- H[7]
```

Let us make a pointer that points to the above memory address.

```cpp
int *aptr = &a;
```

Now we perform addition on the pointer.

```cpp
aptr++;
```

What happens is that the the pointer doesnt shift 1 byte but 4 bytes. The reason is that it leaves 4 bytes of memory for the integer data type and occupies the next 4 bytes of memory.

```mermaid
graph LR;
A[0] --- B[1]
B --- C[2]
C --- D[3]
D --- E[4]

subgraph Integer Pointer Shifted by 4 bytes
E --- F[5]
F --- G[6]
G --- H[7]
end
```

Similarly we can shift the pointer left and right by subtraction and addition respectively.

**Note**: The data type declared for pointers should be the same as the data type of the value stored in the variable.

## Pointers and Arrays

Arrays work very much like pointers to their first elements, and, , an array access can always be implicitly converted to a pointer access of the appropriate type.

For example:

```cpp
int a[] = {1,2,3};
std::cout << a ;
```
The output of the above code would be `0x7ffe6dfdca20` because `a` points to the first element in the array.

By using dereference operator, we can get the first element.

```cpp
std::cout << *a;
```
Output would be : `1`

We can also access other elements in the array by the following method:

```cpp
std::cout << *(a + 1) << "\n";
std::cout << *(a+2);
```

Output :

```cpp
2
3
```

The following code represents different ways in which arrays and pointers can be used.

```cpp
	int a[5];
    int *aptr = a;
    
    *aptr = 10;
    
    aptr++;
    
    *aptr = 20;
    
    aptr = &a[2];
    
    *aptr = 30;
    
    aptr = a + 3;
    
    *aptr = 40;
    
    *(a+4) = 50;
    
    for(int i=0;i<5;i++){
        std::cout << a[i] << " ";
    }
```

The output would be:

```cpp
10 20 30 40 50
```

## Pointer to Pointer

A pointer can point to a pointer which points to a value.

For example:

```cpp
int a= 20;
int *aptr = &a;    
int **aptp = &aptr;
    
std::cout << *aptp << "\n";
    
std::cout << **aptp;
```

Output::

```cpp
0x7fffd969d7b4
20
```

## Pointers Usage

We can access the value directly and modify it using pointers from any place.

For example:

```cpp
#include <iostream>

int increment(int a){
    a++;
    return a;
}

int main() {
    // Write C++ code here
    int a = 20;
    
    increment(a);
    
    std::cout << a;
    
    return 0;
}
```

In the above code, the value of a remains the same and doesn't change.

But if we pass the pointer and change the value, the value changes globally.

```cpp
#include <iostream>

int increment(int *aptr){
    *aptr = *aptr + 1;
}

int main() {
    // Write C++ code here
    int a = 20;
    
    increment(&a);
    
    std::cout << a;
    
    return 0;
}
```

[For more information](https://www.cpp.edu/~elab/ECE114/Pointers%20in%20C++.html#:~:text=As%20just%20seen%2C%20a%20variable,variable%20they%20point%20to%20directly.)
