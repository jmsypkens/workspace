---
layout: post
title:  Chapter 1 - Introduction to Computers and Programming
date:   2016-06-15 23:33:22 +0000
categories: c++
comments: true 
---

#### Lecturer: Parvaneh Ghaforyfard 

Lecture notes based on chapter 2 from:
***[Starting Out with C++: Early Objects (8th Edition)](https://www.amazon.com/Starting-Out-Early-Objects-8th/dp/013336092X "Amazon Link")***

***

![alt text](http://assets2.thecreatorsproject.com/content-images/contentimage/no-slug/e4e149d87b4f8f5330c1e3c79c24ea6f.jpg "Homer")

### How Computers Work

##### What is a program?
+ A program is a set of instructions.
+ The instructions are a collection of algorithms. 
+ Algorithms are a set of steps to find solutions to a problem.

##### What is data?
+ Information
+ Numbers
+ Text
+ Images
+ Videos

##### How does a computer work? 

Diagram of how a computer traditionally functions: 
![alt text](http://2.bp.blogspot.com/-75pfjWwLmzI/UGGQn6KsqcI/AAAAAAAAAO0/1IRHcPwTuqM/s1600/Computer+System.png "Computer Diagram")

###### Components 
+ CPU: Central Processing Unit
+ ALU: Arithemitic Logic Unit
+ Control Unit
+ Memory
+ Input 
+ Output

###### What are examples of Operating Systems?
+ Linux
+ Mac OS
+ Windows

###### What are some examples of input devices? 
+ Keyboard
+ Scanner
+ Mouse
+ Flash Drives 

###### What are some examples of output devices?
+ Monitor
+ Printer 
+ Flash Drives
+ Audio Interface

##### Binary - Machine Code 

###### What is Binary Code?

+ 1 bit = one binary digit. 
+ 1 byte = eight bits. Written as: 01010010 
+ Example 1: In C++ 1 word uses 4 bytes of memory. 

##### Programming Languages 
There are two main kinds of programming languages, High Level Languages and Low Level Languages.

+ High Level Language: A machine-independent programming language, such as C, C++, Java, Perl and COBOL. It lets the programmer concentrate on the logic of the problem to be solved rather than the intricacies of the machine architecture such as is required with low-level assembly languages.
+ Low Level Language:  a low-level programming language is a programming language that provides little or no abstraction from a computer's instruction set architecture—commands or functions in the language map closely to processor instructions. Generally this refers to either machine code or assembly language. 


##### Diagram of how a computer utilizes software:
![alt text](http://www.codeproject.com/KB/dotnet/clr/compiler_new.gif "Language Diagram")

###### Different Aspects of a Programming Language
1. Keywords (Reserved Words)
2. Programmer defined identifiers (ex. variables)
3. Operators (Arithemitic Operating)
4. Punctuations
5. Syntax 
6. Libraries (files written by others usually installed or included)
7. Comments!!! Comment your code. It will help you in the long run. 

### Introduction to C++ 

#### Examples of Programming Entities

1. Variables
2. Functions 
3. Objects

#### Using Preprocessor Directives
```cpp
# include <iostream> 
using namespace std; // makes calling 'std::' unnecessary' 
```
+ '#' = preprocessor directive 
+ Preprocessor directive: Every program contains various types of items with unique names. C++ uses namespace to organize the names of program entities.

#### Basic Programming Structure

Example of Function:
```cpp  
int main() {
    // code statements go here! 
}
```

+ You must use a 'main' function in your C++ programs.




### Code Examples 

###### Example 1: "Hello World"
```cpp 
#include <iostream>
using namespace std; 

int main() {
    // cout stands for console out
    // << stream insertion operator 
    // \n is an escape symbol 
    cout << "Hello World! \n" << endl ; 
    cout << "My First Program in C++ \n" << endl ; 
    
    
    return 0; 
}
```
> Output: "Hello World!" 
"My First Program in C++"

###### Example 2: "Numbers"

```cpp
#include <iostream>
using namespace std; 

int main() {
    int num = 198; 
    cout << num << endl ;
    
    return 0; 
}
```
> Output: '198' 

###### Example 3: "Test Size of different data types"
Using the 'sizeof()' function, you can determine the byte size of a variable. 
```cpp
#include <iostream>
using namespace std;

int main() 
    {
        int test1;

        cout << "the size of an integer is " << sizeof(int);
        cout << " bytes.\n";
        
        return 0;
    }
```

> Output: 
the size of an integer is 4 bytes.    

###### Example 4: "Getting a user input"

Use "cin" to get a user input. 

```cpp
#include <iostream>
using namespace std;

int main() {
    int num ;
    int newNum ; 
    
    cout << "Please enter a number: \n" ; 
    cin >> num ;
    
    newNum = num + 5; 
    
    cout << "The number you entered is: " << num << endl ; 
    cout << "The number you enter plus 5 is: " << newNum << endl ; 
    
    return 0; 
}
```

###### Example 5: "Comments"

It is very important to use comments to document your code. 

```cpp
/* 
THIS IS HOW TO DO COMMENTS, USE THEM EVERY PROGRAM!

Programmer Name: 
Date: 

*/ 
```
