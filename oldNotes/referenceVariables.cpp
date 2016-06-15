#include <iostream>
#include <iomanip>
using namespace std;

void doubleNum(int &refVar); 

int main() 
{
   int value = 4;
   
   cout << "In main, value is " << value << endl; 
   cout << "Now calling doubleNum... " << endl; 
   doubleNum(value);
   cout << "Now back in main, value is " << value << endl;
   return 0; 
}

void doubleNum(int &refVar)
{
    refVar *= 2; // or refVar = refVar * 2 
}

