#include <iostream>
#include <iomanip>
using namespace std;

void showStatic(); 

int main() 
{
    // call the showStatic function 10 times
    for (int count = 0; count < 10; count++)
        showStatic();
    return 0;
}

void showStatic()
{
    static int numCalls = 0; 
    
    cout << "this function has been called " 
         << ++numCalls << " times. " << endl; 
         // ++numCalls takes last numCall and adds 1 to it. 
}