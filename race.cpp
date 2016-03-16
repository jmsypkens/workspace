// Jerry M. Sypkens 
// COS 393 8100 Prof. P. Ghaforyfard
// Week 3 Homework Due March 15, 2016 - Chapter 4, Exercise 12. Running the Race

// Write a program that asks for the names of three runners and the time it took each of them
// to ﬁnish a race. The program should display who came in ﬁrst, second, and third place.
// Think about how many test cases are needed to verify that your problem works correctly.
// (That is, how many different ﬁnish orders are possible?)
// Input Validation: Only allow the program to accept positive numbers for the times.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string playerOne, playerTwo, playerThree; 
    double runnerOneTime, runnerTwoTime, runnerThreeTime; 
    
    //Runner One
    cout << "Please enter the name of runner number one: " << endl; 
    cin >> playerOne; 
    cout << "Please enter the time it took runner one to the finish the race in seconds: " << endl;
    cin  >> runnerOneTime; 
    
    if (runnerOneTime > 0) {
        cout << playerOne << " ran the race in " << runnerOneTime << " seconds.\n"; 
        cout << "" << endl; 
    }
    else { //Runner One Validation
        cout << "You didn't enter a valid number.\n"
             << "Run the program again with a positive number, for example: 40";
        return 0;
    }
    
    // Runner Two
    cout << "Please enter the name of runner number two: " << endl;
    cin >> playerTwo;
    cout << "Please ener the time it took runner two to the finish the race in seconds: " << endl;
    cin  >> runnerTwoTime; 
    
    if (runnerTwoTime > 0) {
        cout << playerTwo << " ran the race in " << runnerTwoTime << " seconds.\n"; 
        cout << "" << endl; 
    }
    else { // Runner Two Validation 
        cout << "You didn't enter a valid number.\n"
             << "Run the program again with a positive number, for example: 40";
        return 0;
    }
    
    // Runner Three 
    cout << "Please enter the name of runner number three: " << endl;
    cin >> playerThree;
    cout << "Please ener the time it took runner three to the finish the race in seconds: " << endl;
    cin  >> runnerThreeTime; 
    
    if (runnerThreeTime > 0) {
        cout << playerThree << " ran the race in " << runnerThreeTime << " seconds.\n";
        cout << "" << endl; 
    }
    else { // Runner Three Validation 
        cout << "You didn't enter a valid number.\n"
             << "Run the program again with a positive number, for example: 40";
             return 0;
    }
    
    if (runnerOneTime <= runnerTwoTime && runnerTwoTime <= runnerThreeTime) {
        cout << "1. First Place: " << playerOne << "Time: " << runnerOneTime << endl; 
        cout << "2. Second Place: " << playerTwo << "Time: " << runnerTwoTime << endl;
        cout << "3. Third place: " << playerThree << "Time: " << runnerThreeTime << endl;
    }
    else if (runnerTwoTime <= runnerOneTime && runnerOneTime <= runnerThreeTime) {
        cout << "1. First Place: " << playerTwo << " Time: " << runnerTwoTime << endl; 
        cout << "2. Second Place: " << playerOne << " Time: " << runnerOneTime << endl;
        cout << "3. Third place: " << playerThree << " Time: " << runnerThreeTime << endl;
    }
    else if (runnerTwoTime <= runnerThreeTime && runnerThreeTime <= runnerOneTime) {
        cout << "1. First Place: " << playerTwo << " Time: " << runnerTwoTime << endl; 
        cout << "2. Second Place: " << playerThree << " Time: " << runnerThreeTime << endl;
        cout << "3. Third place: " << playerOne << " Time: " << runnerOneTime << endl;
    }
    else if (runnerOneTime <= runnerThreeTime && runnerThreeTime <= runnerTwoTime) {
        cout << "1. First Place: " << playerOne << " Time: " << runnerOneTime << endl; 
        cout << "2. Second Place: " << playerThree << " Time: " << runnerThreeTime << endl;
        cout << "3. Third place: " << playerTwo << " Time: " << runnerTwoTime << endl;
    }
    else if (runnerThreeTime <= runnerOneTime && runnerOneTime <= runnerTwoTime) {
        cout << "1. First Place: " << playerThree << " Time: " << runnerThreeTime << endl; 
        cout << "2. Second Place: " << playerOne << " Time: " << runnerOneTime << endl;
        cout << "3. Third place: " << playerTwo << " Time: " << runnerTwoTime << endl;
    }
    else {
        cout << "1. First Place: " << playerThree << " Time: " << runnerThreeTime << endl; 
        cout << "2. Second Place: " << playerTwo << " Time: " << runnerTwoTime << endl;
        cout << "3. Third place: " << playerOne << " Time: " << runnerOneTime << endl;
        
    }
    return 0; 
}



