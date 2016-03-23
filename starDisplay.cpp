// Star Display
#include <iostream>
using namespace std;

int main() {
    
    int numRows, starsPerRow; 
    
    cout << "This program will display rows of stars.\n";
    cout << "Enter the number of rows to print: ";
    cin >> numRows;
    
    cout << "Enter the Number of stars on each row: ";
    cin >> starsPerRow;
    cout << endl; 
    
    for (int row = 1; row <= numRows; row++) {
        
        for (int star = 1; star <= starsPerRow; star++) {
            cout << '*';
        }
        
        cout << endl; 
    }
    cout << endl; 
    return 0; 
}