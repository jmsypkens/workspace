#include <iostream>
#include <fstream>
using namespace std;

// function prototype 
void displayValue(int num); // tells what kind of data type the function passes.


int main()
{
    cout << "I am passing 5 to displayValue\n"; 
    displayValue(5);    // call displayValue w/ argument 5
    cout << "Back to main. \n";
    
    return 0; 
    
}

/********************************
 *          displayValue()
 * This function uses an interger 
 * parameter whose value is 
 * displayed.
 ********************************/
 
 void displayValue(int num)
 {
     cout << "The value is " << num << endl; 
 }