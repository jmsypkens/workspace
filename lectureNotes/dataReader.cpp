#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    string name;
    
    // opens output file
    inputFile.open("friends.txt");
    
    cout << "Now reading data from the file. \n";

    inputFile >> name;
    cout << name << endl;
    
    inputFile >> name;
    cout << name << endl;
    
    // close file 
    inputFile.close();
    
    cout << "Done.\n";
    return 0; 
    
}
