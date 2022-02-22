# Strings

To use strings in a program, you need to include a header called string.
## Declaring a string
```cpp
string str = "word";
```

We can also specify the size of the string.

```cpp
string str(10);
```

We can also fill the string with certain characters.

```cpp
string str(5,"N");
```

We can also make copy of the string.

```cpp
string string_1 = "something";
string string_2(string_1);
```

## Taking Input

```cpp
std::string str;
std::cin >> str;
```

To input an entire line, we can use `getline` function.

```cpp
std::string str;
std::getline(cin,str);
```

## String Functions

- ### append(): 
	Inserts additional characters at the end of the string (can also be done using ‘+’ or ‘+=’ operator).
	
```cpp
std::string str = "cod";
str.append("ing");
/*Or, 
str+="ing"
*/
```
