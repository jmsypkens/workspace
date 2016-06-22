// Jerry M. Sypkens 
// WLAC COS 939 8526 PGHAF SU16
// June 21, 2016 
// Assignment 1: - 5. Cyborg Data Type Sizes

#include <iostream>
using namespace std;

int main() 
    {
        int test1;
        char test2;
        float test3;
        double test4;
        long double test5;
        
        
        cout << "the size of an integer is " << sizeof(int);
        cout << " bytes.\n";
        
        cout << "the size of a char is " << sizeof(char);
        cout << " bytes.\n";
        
        cout << "the size of a float is " << sizeof(float);
        cout << " bytes.\n";
        
        cout << "the size of a double is " << sizeof(double);
        cout << " bytes.\n";
        
        cout << "the size of a long double is " << sizeof(long double);
        cout << " bytes.\n";
        
        return 0;
    }