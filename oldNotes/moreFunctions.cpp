#include <iostream>
#include <fstream>
using namespace std;

// function prototype 
int product(int num1, int num2, int num3, int num4); // tells what kind of data type the function passes.


int main()
{
    int value1 = 0,
        value2 = 0, 
        value3 = 0,
        value4 = 0,
        total; 
    
    cout << "Please enter four of the biggest numbers you can think of.\n"
         << "I will do the math in my brain! Enter you numbers:\n";
    cin  >> value1 >> value2 >> value3 >> value4; 
        
    total = product(value1, value2, value3, value4); 
   
   cout << "The product of the four numbers is " << total << endl;
   return 0; 
}

/********************************
 *          product()
 * This function finds the product
 * of four numbers. 
 ********************************/
 
 int product(int num1, int num2, int num3, int num4)
 {
  return (num1 * num2 * num3 * num4) // returns expression to main function. 
 }
 
