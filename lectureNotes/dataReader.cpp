#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    
    // opens output file
    outputFile.open("demofile.txt");
    
    cout << "Now writing data to the file. \n";
    
    // write four names to the file
    outputFile << "Debussy\n";
    outputFile << "Bach\n";
    outputFile << "Chopin\n";
    outputFile << "Rachmaninoff\n";
    outputFile << "Mozart\n";
    
    // close file 
    outputFile.close();
    
    cout << "Done.\n";
    return 0; 
    
}
