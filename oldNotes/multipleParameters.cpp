#include <iostream>
#include <fstream>
using namespace std;

// function prototype 
void showSum(int num1, int num2, int num3); // tells what kind of data type the function passes.


int main()
{
    int value1, value2, value3;
    
    //Get 3 integers
    cout << "Enter three integers and I will display ";
    cout << "their sum: ";
    cin  >> value1 >> value2 >> value3;
    
    showSum(value1, value2, value3);
    return 0;
}

/********************************
 *          showSum()
 * This function uses multiple 
 * interger parameter whose 
 * value is displayed.
 ********************************/
 
 void showSum(int num1, int num2, int num3)
 {
     cout << "The sum is " << (num1 + num2 + num3) << endl; 
 }