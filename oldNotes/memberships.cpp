#include <iostream>
#include <fstream>
#include <iomanip>
#include <string> 
using namespace std;

// function prototype 
void displayMenu();
int getChoice();
void showFees(string category, double rate, int months); 

int main()
{
    // constants for monthly membership rates
    const double adult_rate = 120.0,
                 child_rate = 60.0,
                 senior_rate = 100;
    
    int          choice,                // holds the user's menu choice
                 months;                // number of months being paid
    
    //sets numeric output 
    cout << fixed << showpoint << setprecision(2); 
    
    do 
    {
        displayMenu();
        choice = getChoice(); // assign choice the value returned by getChoice()
        
        if (choice != 4 ) // if user does not want to quit, proceed
        {
            cout << "For how many months? ";
            cin  >> months; 
            
            switch (choice)
            {
                case 1: showFees("Adult", adult_rate, months);
                    break;
                case 2: showFees("Child", child_rate, months);
                    break;
                case 3: showFees("Senior", senior_rate, months);
            }
        }
    } while (choice != 4);
    return 0; 
}

/********************************
 *         displayMenu()
 * Clears screen then Displays menu! 
 ********************************/
 
 void displayMenu() 
 { 
     system("cls");             // Used to clear the screen. 
     cout << "Please make a membership selection:\n";
     cout << "1. Adult Membership\n";
     cout << "2. Childrens Membership\n";
     cout << "3. Senior Membership\n";
     cout << "4. Select to Exit\n\n"; 
 }
 
 
 /********************************
 *         getChoice()
 * Gets user chioce. 
 ********************************/
 
int getChoice() 
{
    int selection; 
    cin >> selection; 
    
    while (selection < 1 || selection > 4)
    { 
        cout << "The only valid choices are 1-4. please re-enter. ";
        cin >> selection; 
    }
    return selection;  
    
}
 
 /********************************
 *         showFees()
 * Displays menu! 
 ********************************/
 
 void showFees(string memberType, double rate, int months)
 {
     cout << endl
          << "Membership Type:   "  << memberType << "    "
          << "Number of Months:  "  << months << endl
          << "Total Charges   : $"  << (rate * months) << endl; 
    
     cout << "\nPress the Enter key to return to the menu. ";
     cin.get(); // clear the previous \n our of the input buffer
     cin.get(); // wait for the user to press enter
 }
