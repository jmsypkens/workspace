## Chapter 2 - Introduction to C++ 

#### Components of C++ 

##### Data Types
These are the different types of variables you can use in C++ 

1. Numeric
    + Integers (Short, Int, Long)
    + Floating Point (Float, Double, Long)
2. Character
    + 'char Letter = "A";' (one byte)
    + ASCII table
        + Octal (0-7) Base 8
        + Hexidecimal (0-15) Base 16
        + Decimal (0-9) Base 10
        + Binary (1,0) Base 2
3. String Literal
    + String - a sequence of characters terminated with a null
    + Example. string Name = "Parvaneh";
    + Use: '#include <string>'
    ![alt text](https://i-msdn.sec.s-msft.com/dynimg/IC506190.png "String Example")
4. Bool (True of False)

##### Arithemitic Operators

1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulo (%) - the modulo operation finds the remainder after division of one number by another (sometimes called modulus) Example: (9 % 2) = 1
6. Unary
7. Binary - requires two operands (a + b)
8. Ternary - Requires three operators.  
    Ex. (3 < 7) ? (x = 1) : (x = 0);
    (If 3 is less than 7 than x equals 1. If not, x equals 0)

##### Compound Operators 

1. (+=) Example: (x += 1) is the same as (x = x + 1); 
2. (-=) Example: (x -= 1) is the same as (x = x - 1); 
3. (*=) Example: (x *= 1) is the same as (x = x * 1); 
4. (/=) Example: (x /= 1) is the same as (x = x / 1); 
5. (%=) Example: (x %= 1) is the same as (x = x % 1); 

Use "PEMDAS" however, there are no exponents in C++ 

#### Programming Examples 
Setting up your environment:

```cpp
/*
Programmer Name: Noah Kuttler 
Description: First Program
*/

#include <iostream>
#include <string> // must include to use strings 
using namespace std;

int main() { // main function contains program code 
    char letter = 'A'; 
    string firstName = "Tom"; 
    string lastName = "Brady";
    cout << firstName << lastName << endl; 
    
    return 0; 
    }
```

Getting user input: 

```cpp 
/*
Programmer Name: Noah Kuttler 
Description: Getting a User Input 
*/

#include <iostream>
#include <string> // must include to use strings 
using namespace std;

int main() { 
    string firstName;
    cin >> firstName; 
    cout << firstName << endl; 
    
    return 0; 
    }
```

Using 'getline' to allow multiple word entries from user: 

```cpp 
/*
Programmer Name: Noah Kuttler 
Description: Getting a User Input 
*/

#include <iostream>
#include <string> // must include to use strings 
using namespace std;

int main() { 
    string fullName;
    cout << "Please enter your name \n" << endl; 
    
    getline(cin, fullName); // use getline to get strings with spaces (example.'John' vs. 'John Smith') 
    
    cout << "The name you entered is" << fullName << endl; 
    
    return 0; 
    }
```

Using the data type 'double' :

```cpp 
/*
Programmer Name: Noah Kuttler 
Description: Using the different data types 
*/

#include <iostream>
using namespace std;

int main() { 
     int num; 
     double doubleNumber;
     
     cin >> num >> doubleNumber;
     
     cout << "Num (integer ) = " << num << endl; 
     cout << "double value is = " << doubleNumber << endl; 
     
     return 0; 
    }
```

Exponents in C++

```cpp 
/*
Programmer Name: Noah Kuttler 
Description: Using <cmath> to use exponents 
*/

#include <iostream>
#include <cmath> 
using namespace std;

int main() { 
     int num; 
     cin >> num ; 
     
     cout << "The area is = " << pow(num, 2) << endl; 
     // pow(a,b) is the same as (a to the b power) 
     
     return 0; 
    }
```

Changing one data type to another: 

```cpp 
/*
Programmer Name: Noah Kuttler 
Description: Getting a User Input 

static_cast <datatype> (value) 
is used for manual datatype conversion 
*/

#include <iostream>
#inclue <iomanip> 
#include <cmath> 
using namespace std;

int main() { 
     char letter = 'a';
     cout << static_cast <int>(letter) << endl; 
     
     return 0; 
    }
```

Using Double and Single Quotations in output:

```cpp 
/*
Programmer Name: Noah Kuttler 
Description: using quotations 
*/

#include <iostream>
#inclue <iomanip> 
using namespace std;

int main() { 
    string movieName;
    getline(cin, movieName); 
    cout << "\'" << movieName << "\'" << endl; // ( \' ) used to include (')
     
     return 0; 
    }
```

Using setw() to format your program output: 

```cpp
/*
Programmer Name: Noah Kuttler 
Description: Using setw() to format your program output
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
    int intValue            = 3939;
    double doubleValue      = 91.5;
    string stringValue      = "Quincy Jones";
    
    cout << "(" <<  setw(5) << intValue << ")" << endl;
    cout << "(" <<  setw(8) << doubleValue << ")" << endl;
    cout << "(" <<  setw(16) << stringValue << ")" << endl; 
    // setw(x) moves variable over to the right 'x' spaces 
    // setprecision(x) Sets the decimal precision to be used to format floating-point values on output operations.
    
    return 0; 
    }
```








