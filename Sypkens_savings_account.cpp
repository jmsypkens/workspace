/* Jerry M. Sypkens 
   COS 393 8100 Prof. P. Ghaforyfard
   Assignment #4 Homework Due March 22, 2016 - 23. Savings Account Balance 

23. Savings Account Balance

 Write a program that calculates the balance of a savings account at the end of a three-
 month period. It should ask the user for the starting balance and the annual interest 
 rate. A loop should then iterate once for every month in the period, performing the
 following steps:
 
        A) Ask the user for the total amount deposited into the account during that month
and add it to the balance. Do not accept negative numbers.
        
        B) Ask the user for the total amount withdrawn from the account during that
month and subtract it from the balance. Do not accept negative numbers or
numbers greater than the balance after the deposits for the month have been
added in.
        
        C) Calculate the interest for that month. The monthly interest rate is the annual
interest rate divided by 12. Multiply the monthly interest rate by the average of
that month’s starting and ending balance to get the interest amount for the
month. This amount should be added to the balance.

After the last iteration, the program should display a report that includes the following
information:
    • starting balance at the beginning of the three-month period
    • total deposits made during the three months
    • total withdrawals made during the three months
    • total interest posted to the account during the three months
    • final balance
*/ 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double initBalance,         // the initial balance
           anInt,               // the annual interest
           mntStart = 0,        // the monthly starting balance
           mntEnd,              // the monthly ending balance
           deposit,             // the monthly deposits
           withdrawn,           // the monthly withdrawl
           totalDeposit = 0,    // the total deposit 
           totalWid = 0,        // the total withdrawls 
           mntInterest,         // the monthly interest
           totalInt = 0;            // the total interest 
    
    
    // user asked to enter initial balance and annual interest rate
    cout << "We will help you calculate the balance of your savings account\n"
         << "at the end of the quartly three month period.\n\n";
    
    cout << "Please enter the starting balance of the account: ";
    cin  >> initBalance; 
    cout << endl; 
    
    cout << "Please enter the annual interest ammount as a decimal: ";
    cin  >> anInt;
    
    mntStart = mntStart + initBalance; 
    
    // loop iterated once for each month 
    for (int mnt = 1; mnt <= 3; mnt++) 
    {
        
        do {
            // user enters deopsits for month
            // validate only + integers
            
            cout << "What is the total amount deposited\n"
                 << "during the month " << mnt << "?: ";
            cin  >> deposit;
            
            if (deposit < 0) {
                
                cout << "Invalid entry. Deposits must be a positive number.\n";
            
            } while (deposit < 0);
                cout << endl;
                totalDeposit = totalDeposit + deposit; 
                
            do {
                // user enters monthly withdrawal and only validates positive
                // numbers and when total deposits are > than the withdrawls. 
                
                cout << "What's the total amount withdrawn from the account\n"
                     << "during the month of " << mnt << "?: ";
                cin  >> withdrawn; 
                
                if (withdrawn < 0 || withdrawn > totalDeposit) {	
				    cout << "Invalid entry.\n";

				    if (withdrawn < 0) {
					cout << "Withdrawals must be a positive number.\n";
				    } 
				    else {
					cout << "The balance must be greater than the withdrawals.\n";
			 	    }
                } 
            } while (withdrawn < 0 || withdrawn > totalDeposit);
            
            cout << endl;
            cout << endl; 
            
            //total widthdrawn 
            totalWid = totalWid + withdrawn;
            
            //monthly end balance
            mntEnd = mntStart + deposit - withdrawn; 
            
            // monthly interest
            mntInterest = ((mntStart + mntEnd) / 2.00) * (anInt / 12.00); 
            
            // total interest 
            totalInt = totalInt + mntInterest; 
            
            mntStart = mntEnd + mntInterest; 
        } 
    
    // Display report
	cout << "\n Quarterly Savings Account Report: \n"
		 << "**************************************\n";
	cout << fixed << showpoint << setprecision(2);
	cout << "Starting balance  : $ " << setw(9) << initBalance << endl;
   	cout << "Total deposits    : $ " << setw(9) << totalDeposit << endl;
   	cout << "Total withdrawals : $ " << setw(9) << totalWid << endl;
	cout << "Total interest    : $ " << setw(9) << totalInt << endl;
	cout << "Final balance     : $ " << setw(9) << mntStart << endl;
	return 0;
    
}
