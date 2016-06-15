#include <iostream>
using namespace std;

int main() 
    {
        double  basePayRate         = 18.25,  //Base Pay Rate
                overtimePayRate     = 27.38,  //Overtime Pay Rate
                regularHours        = 40.0,   //Regular Hours Worked
                overtimeHours       = 10,     //Overtime Hours
                overtimeWages,
                totalWages,
                
        //Calculates regular wages
        regularWages = basePayRate * regularHours;
        
        //Calculates overtime wages
        overtimeWages = overtimePayRate * overtimeHours;
        
        //Calculates total Wages
        totalWages = regularWages + overtimeWages;
        
        //Displays total wages
        cout << "Wages for this week are $" << totalWages << endl;
        return 0;
        
    }