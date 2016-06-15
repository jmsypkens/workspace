// Jerry M. Sypkens 
// COS 393 8100 Prof. P. Ghaforyfard
// Week 2 Homework Due March 7, 2016 - 8. Box Office

// This program calculates box office revenue. 

#include <iostream>
#include <string>
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
    
    cout << "Movie name: " << movieName << endl;
    cout << "Adult Tickets Sold: " << adultTixSold << endl;
    cout << "Childrens Tickets Sold: " << childTixSold << endl; 
    cout << "Gross box office profit: $" << grossBOP << endl; 
    cout << "Amount paid to distributor: $" << paidToDistributor << endl; 
    cout << "Net box office profit: $" << netBOP << endl; 
    
    return 0; 
}