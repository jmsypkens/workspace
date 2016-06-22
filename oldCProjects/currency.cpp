// Jerry M. Sypkens 
// WLAC COS 939 8526 PGHAF SU16
// June 21, 2016 
// Assignment 2: 12. Currency Converter

// This program converts US dollar into Euro and Yen. 

#include <iostream>
#include <iomanip> 
using namespace std;

const double YEN_PER_DOLLAR = 113.88; // current rate June 21st
const double EURO_PER_DOLLAR  = .91 ; // current rate June 21st

int main() {
    double usDollar, finalYenDollar, finalEuroDollar;
    
    cout << "Please enter the US dollar amount that you would like to convert to Yen and Euro: \n" ;
    cin >> usDollar;
      
    finalYenDollar = usDollar * YEN_PER_DOLLAR;
    finalEuroDollar = usDollar * EURO_PER_DOLLAR; 
    
    cout << setprecision(2) << fixed; 

    cout << left << "Dollar amount entered to Yen: \n" << "\u00A5" << " " << finalYenDollar << "\n"; 
    cout << left << "Dollar amount entered to Euro: \n" << "\u20AC" << " " << finalEuroDollar << "\n"; 
    
    return 0;
}