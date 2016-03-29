// This program calculates DVD rental charges
// where every third DVD is free. using the continue statement

#include <iostream>
#include <iomanip>
using namespace std; 

int main() 
{
    int numDVDs;        // # of DVD's rented
    double total = 0.0; // total charges for all DVDS
    char current;       // current release (Y/N?)
    
                        // get # of DVDs rented
    cout << "How many DVD's are being rented? ";
    cin  >> numDVDs; 
    
    for (int dvdCount = 1; dvdCount <= numDVDs; dvdCount++)
    {
        if (dvdCount % 3 == 0) // if it's a 3rd DVD it's free
        {
            cout << "DVD # " << dvdCount << " is free!\n";
            continue;
        }
        
        cout << "Is DVD # " << dvdCount << " a current release (Y/N)? ";
        cin  >> current; 
        
        if ((current == 'Y') || (current == 'y'))
            total += 3.50;
        else
            total += 2.50;
    }
    // display total charges
    
    cout << fixed << showpoint << setprecision(2);
    cout << "The total is $" << total << endl; 
    return 0; 
}