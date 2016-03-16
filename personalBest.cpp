// Jerry M. Sypkens 
// COS 393 8100 Prof. P. Ghaforyfard
// Week 3 Homework Due March 15, 2016 - Chapter 4, Exercise 13. Personal Best

// 13. Personal Best
// Write a program that asks for the name of a pole vaulter and the dates and vault heights (in
// meters) of the athlete’s three best vaults. It should then report in height order (best ﬁrst),
// the date on which each vault was made, and its height.
// Input Validation: Only allow the program to accept values between 2.0 and 5.0 for
// the heights.

#include <iostream>
#include <string>
using namespace std;

const char slash_dummy = '/'; 

int main() {
    string pvName;
    double vaultHeight1, vaultHeight2, vaultHeight3; 
    int m1, m2, m3, d1, d2, d3, y1, y2, y3; // date (m)onth, (d)ay, (y)ear 
    
    // name
    cout << "Please enter the name of the Pole Vaulter: " << endl; 
    getline(cin, pvName); 
    
    // vault 1
    cout << "Please enter the top three pole vaults for the pole vaulter below... " << endl;
    cout << "Please enter the first pole vault height below (in meters): " << endl;
    cin  >> vaultHeight1;
    cout << "Please enter the date for the first pole vault: \n " 
         << "Enter the month, then press enter. Then the day, then press enter. Then the year, then press enter." << endl; 
    cin  >> m1 >> d1 >> y1;
    
    if (vaultHeight1 >= 2.0 && vaultHeight1 <= 5.0) {
        cout << pvName << " first result was " << vaultHeight1 << " meters. \n" 
             << "Pole Vault 1 Date: " << m1 << slash_dummy << d1 << slash_dummy << y1 << endl;
    }
    else { // vault height validation
        cout << "You didn't enter a valid pole vault height.\n"
             << "Run the program again with a pole vault height between 2.0 and 5.0 meters." << endl;
        return 0;
    }
    
    // vault 2
    cout << "Please enter the second pole vault height below (in meters): " << endl;
    cin  >> vaultHeight2;
    cout << "Please enter the date for the second pole vault: \n " 
         << "Enter the month, then press enter. Then the day, then press enter. Then the year, then press enter." << endl;
    cin  >> m2 >> d2 >> y2;
    
    if (vaultHeight2 >= 2.0 && vaultHeight2 <= 5.0) {
        cout << pvName << "'s second result was " << vaultHeight2 << " meters. \n" 
             << "Pole Vault 2 Date: " << m2 << slash_dummy << d2 << slash_dummy << y2 << endl;
    }
    else { // vault height validation
        cout << "You didn't enter a valid pole vault height.\n"
             << "Run the program again with a pole vault height between 2.0 and 5.0 meters." << endl;
        return 0;
    }
    
    // vault 3
    cout << "Please enter the third pole vault height below (in meters): " << endl;
    cin  >> vaultHeight3;
    cout << "Please enter the date for the third pole vault: \n " 
         << "Enter the month, then press enter. Then the day, then press enter. Then the year, then press enter." << endl; 
    cin  >> m3 >> d3 >> y3;
    
    if (vaultHeight3 >= 2.0 && vaultHeight3 <= 5.0) {
        cout << pvName << "'s third result was " << vaultHeight3 << " meters. \n" 
             << "Pole Vault 3's Date: " << m3 << slash_dummy << d3 << slash_dummy << y3 << endl;
    }
    else { // vault height validation
        cout << "You didn't enter a valid pole vault height.\n"
             << "Run the program again with a pole vault height between 2.0 and 5.0 meters." << endl;
        return 0;
    }
   
   
   
   // pole vault results
   
   // order of results: 123 
    if (vaultHeight1 >= vaultHeight2 && vaultHeight2 >= vaultHeight3) {
        cout << "Here are " << pvName << "'s results from best to last:" << endl;
        
        cout << "1. First Best: " << vaultHeight1 << " meters." << endl;
        cout << "Date: " << m1 << slash_dummy << d1 << slash_dummy << y1 << endl; 
             
        cout << "2. Second Best: " << vaultHeight2 << " meters." << endl;
        cout << "Date: " << m2 << slash_dummy << d2 << slash_dummy << y2 << endl;
             
        cout << "3. Third Best: " << vaultHeight1 << " meters." << endl;
        cout << "Date: " << m3 << slash_dummy << d3 << slash_dummy << y3 << endl;
    }
    
    //132
    if (vaultHeight1 >= vaultHeight3 && vaultHeight3 >= vaultHeight2) {
        cout << "Here are " << pvName << "'s results from best to last:" << endl;
        
        cout << "1. First Best: " << vaultHeight1 << " meters." << endl;
        cout << "Date: " << m1 << slash_dummy << d1 << slash_dummy << y1 << endl; 
             
        cout << "2. Second Best: " << vaultHeight3 << " meters." << endl;
        cout << "Date: " << m3 << slash_dummy << d3 << slash_dummy << y3 << endl; 
             
        cout << "3. Third Best: " << vaultHeight2 << " meters." << endl;
        cout << "Date: " << m2 << slash_dummy << d2 << slash_dummy << y2 << endl; 
    }
    
    //213
    else if (vaultHeight2 <= vaultHeight1 && vaultHeight1 <= vaultHeight3) {
        cout << "Here are " << pvName << "'s results from best to last:" << endl;
        
        cout << "1. First Best: " << vaultHeight2 << " meters." << endl;
        cout << "Date: " << m2 << slash_dummy << d2 << slash_dummy << y2 << endl;
             
        cout << "2. Second Best: " << vaultHeight1 << " meters." << endl;
        cout << "Date: " << m1 << slash_dummy << d1 << slash_dummy << y1 << endl; 
             
        cout << "3. Third Best: " << vaultHeight3 << " meters." << endl;
        cout << "Date: " << m3 << slash_dummy << d3 << slash_dummy << y3 << endl; 
    }
    
    
    
    //231
    else if (vaultHeight2 <= vaultHeight3 && vaultHeight3 <= vaultHeight1) {
        cout << "Here are " << pvName << "'s results from best to last:" << endl;
        
        cout << "1. First Best: " << vaultHeight2 << " meters." << endl;
        cout << "Date: " << m2 << slash_dummy << d2 << slash_dummy << y2 << endl;
             
        cout << "2. Second Best: " << vaultHeight3 << " meters." << endl;
        cout << "Date: " << m3 << slash_dummy << d3 << slash_dummy << y3 << endl; 
             
        cout << "3. Third Best: " << vaultHeight1 << " meters." << endl;
        cout << "Date: " << m1 << slash_dummy << d1 << slash_dummy << y1 << endl; 
    }
    
    //312
    else if (vaultHeight3 <= vaultHeight1 && vaultHeight1 <= vaultHeight2) {
        cout << "Here are " << pvName << "'s results from best to last:" << endl;
        
        cout << "1. First Best: " << vaultHeight3 << " meters." << endl;
        cout << "Date: " << m3 << slash_dummy << d3 << slash_dummy << y3 << endl; 
             
        cout << "2. Second Best: " << vaultHeight1 << " meters." << endl;
        cout << "Date: " << m1 << slash_dummy << d1 << slash_dummy << y1 << endl; 
             
        cout << "3. Third Best: " << vaultHeight2 << " meters." << endl;
        cout << "Date: " << m2 << slash_dummy << d2 << slash_dummy << y2 << endl;
    }
    
    //321
    else {
        cout << "Here are " << pvName << "'s results from best to last:" << endl;
        
        cout << "1. First Best: " << vaultHeight3 << " meters." << endl;
        cout << "Date: " << m3 << slash_dummy << d3 << slash_dummy << y3 << endl; 
             
        cout << "2. Second Best: " << vaultHeight2 << " meters." << endl;
        cout << "Date: " << m2 << slash_dummy << d2 << slash_dummy << y2 << endl;
             
        cout << "3. Third Best: " << vaultHeight1 << " meters." << endl;
        cout << "Date: " << m1 << slash_dummy << d1 << slash_dummy << y1 << endl; 
    }
    return 0; 
}