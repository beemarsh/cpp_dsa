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
