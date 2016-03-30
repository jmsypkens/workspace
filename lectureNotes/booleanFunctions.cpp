#include <iostream>
#include <fstream>
using namespace std;

// function prototype 
bool isEven(int); // tells what kind of data type the function passes.

// bool is for boolean... or true and false 

int main()
{
    int number;
    
    cout << "Enter an integer and I will tell you if it is even or odd: ";
    cin >> number;
    
    if (isEven(number))
        cout << number << " is even.\n";
    else
        cout << number << " is odd.\n";
    return 0;
}

/********************************
 *         isOdd()
 * This function finds if an integer
 * it receives is even or odd. 
 ********************************/
 
// mod modulus % 
bool isEven(int number)
 {
   if (number % 2 == 0)
        return true;
   else 
        return false;
 }
 
