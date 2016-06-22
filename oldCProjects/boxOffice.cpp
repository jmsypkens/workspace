// Jerry M. Sypkens 
// WLAC COS 939 8526 PGHAF SU16
// June 21, 2016 
// Assignment 2: - 8. Box Office

// This program calculates box office revenue. 

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const double adultTix = 6.00;
const double childTix = 3.00;

int main() {
    string movieName; 
    double adultTixSold, childTixSold, grossBOP, netBOP, paidToDistributor;
    
    cout << "Please enter the name of the movie shown this evening: \n"; 
    getline (cin, movieName); // gets String w/ multiple words 
    
    cout << "Please enter the amount of adult tickets sold: \n"; 
    cin >> adultTixSold; 
    
    cout << "Please enter the amount of childrens tickets sold: \n";
    cin >> childTixSold;
    
    grossBOP = (adultTix *  adultTixSold) + (childTix * childTixSold); // Gross box office profit
    paidToDistributor = grossBOP * .80; // 80% of ticket sales go to distributor 
    netBOP = grossBOP * .20; // 20% of ticket sales go to theater 
    
    cout << left << setw(50) << "Movie name: " << "\"" << movieName << "\"" << endl;
    cout << left << setw(50) << "Adult Tickets Sold: " << adultTixSold << endl;
    cout << left << setw(50) << "Childrens Tickets Sold: " << childTixSold << endl; 
    
    // sets decimal position 
    cout << setprecision(2) << fixed ;
    
    cout << left << setw(50) << "Gross box office profit: " << "$" << grossBOP << endl; 
    cout << left << setw(49) << "Amount paid to distributor: " << "-$" << paidToDistributor << endl; 
    cout << left << setw(50) << "Net box office profit: " << "$" << netBOP << endl; 
    
    return 0; 
}