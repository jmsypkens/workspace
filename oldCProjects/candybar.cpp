// Jerry M. Sypkens 
// WLAC COS 939 8526 PGHAF SU16
// June 21, 2016 
// Assignment 1: - 1. Candy Bar Sales

#include <iostream>
using namespace std;

int main()
    {
        // variables for candy bar equation
        double cbSold, cbProfit, totalEarned ;
        
        cout << "This program helps calculate the amount your organization makes from selling candy bars.\n";
        cout << "How many candy bars did you sell? ";
        cin >> cbSold;
        
        cout << "Please enter the amount of profit the organization makes from each candy bar sold: ";
        cin >> cbProfit;
        
        // Calculates the amount of profit the organization makes. 
        totalEarned = cbSold * cbProfit; 
        
        // Displays the total amount earned.
        cout << "You have earned a $" << totalEarned << " profit selling candy bars, congratulations!" << endl;
        return 0;
        
    }
        
        
        
        