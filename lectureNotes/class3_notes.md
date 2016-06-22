# Chapter 4 - Making Decisions

#### Overview:
+ Relational Operators 
+ The if statement
+ The if / else statement
+ The if / else if statement
+ Nested if statements
+ Logical Operators ( &&, ||, ! ) 
+ Validating User Input
+ Switch Statment
+ Conditional Operators 

```
Quick Review 
> Greater Than
< Less Than 
>= Greater than or equal 
<= Less than or equal
== equal
!= not equal 

if (a = -4 , b = 4, c = 13) then, 
a > b (false)
c >= a (true)
a != c (true) 
```

#### If / Else / Else If Statements


```
Psuedo-code structure:
Example 1: 
(tip: use identation!!!) 

if (condition) {
    statement1;
    statement2;
} else if (condition) {
    statement3; 
    statement4; 
} else { // with else you need no condition
    statement5;
} 
```

```cpp
Example 2: 

#include <iostream> 
using namespace std; 

int main() {
    double score; 
    cout << "Please enter the students score: \n"; 
    cin >> score; 
    
    if (score >= 90) {
        cout << "You got an A dude, how cool!" << endl; 
    } else if (score >= 80) { 
        cout << "You got a B." << endl; 
    } else if (score >= 70)  {
        cout << "You got a C." << endl; 
    } else if (score >= 60) {
        cout << "You got a D. Study Harder!" << endl; 
    } else {
        cout << "You should retake this class" << endl; 
    }
    return 0; 
}
```

##### ***Truth table*** 

For && (and): 

| A | B | (A `&&` B) |
|-----|:-----:|:----------:|
|True| True | True |
|True | False | False |
|False | True | False | 
|False | False | False | 

For || (or): 

| A | B | (A `||` B) |
|-----|:-----:|:----------:|
|True| True | True |
|True | False | True |
|False | True | True | 
|False | False | False | 


Logical Operator Precedence 

| Highest | `!` | Not |
|---------|:---:|:---:|
|-------->| `&&` | And |
| Lowest | `||` | Or |

Example 3:

***TRUE*** 

`(2 > 3) || (5 > 6) && ( 7 > 8)`

`True || False && False`



#### Flags 
Flags are variables implemented as booleans 

bool flag = false; 

#### Switch Statements 


``` 
Psuedo-code structure:
Example 4: 

switch (condition) {
    case ( ): 
        statement1;
    case ( ): 
        statement2; 
    case ( ):
        statement3; 
    default: // kind of like the 'else' of switch statements 
        statement4; 
    }
```













