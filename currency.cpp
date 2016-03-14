// Jerry M. Sypkens 
// COS 393 8100 Prof. P. Ghaforyfard
// Week 2 Homework Due March 7, 2016 - 12. Currency Converter

// This program converts US dollar into Euro and Yen. 

#include <iostream>
using namespace std;

    const double YEN_PER_DOLLAR = 113.88; // current rate March 3rd
    const double EURO_PER_DOLLAR  = .91 ; // current rate March 3rd

int main() {
    double usDollar, finalYenDollar, finalEuroDollar;
    
    cout << "Please enter the US dollar amount that you would like to convert: \n" ;
    cin >> usDollar;
    cout << "\n" << "Your dollar amount will convert to Euro and Yen below: \n" ;
      
    finalYenDollar = usDollar * YEN_PER_DOLLAR;
    finalEuroDollar = usDollar * EURO_PER_DOLLAR; 

    cout << "\n" << "Dollar amount entered to Yen: \n" << finalYenDollar << "\n"; 
    cout << "\n" << "Dollar amount entered to Euro: \n" << finalEuroDollar << "\n"; 
    
    return 0;
}