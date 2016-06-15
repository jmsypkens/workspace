#include <iostream>
#include <fstream>
using namespace std;

// function prototype 
void changeMe(int aValue); // tells what kind of data type the function passes.


int main()
{
    int number = 12;
    cout << "In main number is " << number << endl;
    
    // call changeMe
    changeMe(number);
    
    // display the value number again
    cout << "back in main again, number is still " << number << endl;
    return 0; 
   
}

/********************************
 *          changeME()
 * This function changes the value
 * stored in its parameter myValue
 ********************************/
 
 void changeMe(int myValue)
 {
     //Change the value of myValue to 0
     myValue = 0;
     
     // display the value in myVAlue
     cout << "In changeMe, the value has been changed to "
          << myValue << endl; 
 }
 
