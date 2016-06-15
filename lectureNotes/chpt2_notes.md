## Chapter 2 - Introduction to C++ 
#### Examples of Programming Entities
1. Variables
2. Functons 
3. Objects

#### Using Preprocessor Directives
```cpp
# include <iostream> 
using namespace std; // makes calling 'std::' unnecessary' 
```
+ '#' = preprocessor directive 
+ Preprocessor directive: Every program contains various types of items with unique names. C++ uses namespace to organize the names of program entities.

#### Basic Programming Structure

Example of Functons:
```cpp  
int main() {
    // code statements go here! 
}
```

+ You must use a 'main' function in your C++ programs.


#### Code Examples 

```cpp 
#include <iostream>
using namespace std; 

int main() {
    // cout stands for console out
    // << stream insertion operator 
    cout << "My First Program in C++ \n"; // \n is an escape symbol 
    
    return 0; 
}
```

