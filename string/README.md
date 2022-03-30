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

- ### assign(): 

	Assigns new string by replacing the previous value (can also be done using ‘=’ operator).
	
```cpp
std::string str = "coding";
str.assign("writing");
/*Or
str = "writing"
*/
```

- ### at():

	Returns the character at a particular position (can also be done using ‘[]’ operator).
	
```cpp
std::string str = "coding";
std::cout << str.at(3)
/* Or
std::cout << str[3];
*/
```

- ### clear(): 

	Erases all the contents of the string and assign an empty string (“”) of length zero.
	
```cpp
std::string str = "coding";
str.clear();
```

- ### compare(): 

Compares the value of the string with the string passed in the parameter and returns an integer accordingly.

```cpp
std::string str1 = "a";
std::string str2 = "b";

str1.compare(str2);
//Output : -1

str2.compare(str1);
//Output : 1

str2.compare(str2);
//Output : 0
```

- ### empty():

	Returns a boolean value, `true` if the string is empty and `false` if the string is not empty.
	
```cpp
std::string str1 = "abc";
std::string str2;

std::cout << str1.empty();
//Output : 0

std::cout << str2.empty();
//Output : 1
```
- ### erase():
	Deletes a substring of the string.

```cpp
std::string str = "coding";
str.erase(1,3);
std::cout << str;

//Output : cng
```

- ### find():
	Searches the string and returns the first occurrence of the parameter in the string.
	
```cpp
std::string str = "coding";
std::cout << str.find("in");

//Output : 3
```

- ### insert():

	Inserts additional characters into the string at a particular position.
	
```cpp
std::string str = "coding";
str.insert(2,"LOL");
std::cout << str;

//Output: coLOLding
```

- ### length():

	Returns the length of the string.
	
```cpp
std::string str = "coding";
std::cout << str.length();

//Output : 6
```

- ### resize():

	Resize the string to the new length which can be less than or greater than the current length.
	
```cpp
std::string str = "coding";
str.resize(3);
std::cout << str;

//Output : cod
```

- ### size():

	Returns the length of the string.
	
```cpp
std::string str = "coding";
std::cout << str.size();

//Output : 6
```

- ### substr():
	Returns a string which is the copy of the substring.
	
```cpp
std::string str = "coding";
std::cout << str.substr(1,3);

//Output : odi
```
