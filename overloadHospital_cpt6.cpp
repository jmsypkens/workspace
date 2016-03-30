/**********************************************************************************
* Jerry M. Sypkens  
* COS 393 - 8100 Prof. P. Ghaforyfard 
* Module 6 Homework Due March 29, 2016 - 14. Overloaded Hospital 
* 
* 14. Overloaded Hospital 

* Write a program that computes and displays the charges for a patient’s hospital
* stay. First, the program should ask if the patient was admitted as an in-patient
* or an out-patient. 
*
* If the patient was an in-patient the following data should be
* entered:
*	• The number of days spent in the hospital
*	• The daily rate
*	• Charges for hospital services (lab tests, etc.)
*	• Hospital medication charges.

* If the patient was an out-patient the following data should be entered:
*	• Charges for hospital services (lab tests, etc.)
*	• Hospital medication charges.
*
* The program should use two overloaded functions to calculate the total charges.
* One of the functions should accept arguments for the in-patient data, while the
* other function accepts arguments for out-patient data. 
* Both functions should return the total charges.
* 
* Input Validation: Do not accept negative numbers for any information.
***********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double calcData(int, double, double, double);
double calcData(double, double);

int main()
{
	char   inOut;
	int    numOfDays;
	double dailyRate,
		   servCharges,
		   medCharges,
		   totalCharges;

	cout << "This program computes and displays a patient’s hospital charges!\n"
	     << "---------------------------------------------------------------\n"
	     << "Was the patient admitted as an in-patient or an out-patient?\n"
	     << "Enter (I) for in-patient\nEnter (O) for out-patient\n";
	cin  >> inOut; 

	switch(inOut)
	{
		case 'i' :
		case 'I' :  do
					{
						cout << "How many days did the patient spend in the hospital? ";
				   		cin  >> numOfDays;

				   		if (numOfDays < 0)
				   		{
				   			cout << "Number of days must be greater than 0.\n";
				   		}

				   	} while(numOfDays < 0);

				   	do
				   	{
				   		cout << "What was the hospitals daily rate? ";
				   		cin  >> dailyRate;

				   		if (dailyRate < 0)
				   		{
				   			cout << "Rate must be greater than 0.\n";
				   		}

				   	} while(dailyRate < 0);
					

		case 'o' :
		case 'O' :  do
				    {
						cout << "Enter the charges for hospital services "
					    	 << "(ex. supplies, lab tests, etc.): ";
				   		cin  >> servCharges;

				   		if (servCharges < 0)
				   		{
				   			cout << "Charges for hospital services must be "
				   					"greater than 0.\n";
				   		}

				    } while (servCharges < 0);
		
				    do
				    {
				    	cout << "Enter the pharmacies medication charges: ";
				    	cin  >> medCharges;

				    	if (medCharges < 0)
				    	{
				    		cout << "Medication charges must be greater"
				    			 << " than 0.\n";
				    	}

				    } while(medCharges < 0);

	}

	cout << "\n    Patient hospital stay report\n"
		 << "---------------------------------------\n";
	cout << right << fixed << showpoint << setprecision(2); // sets decimals to .00 

	switch(inOut)
	{
		case 'i' :
		case 'I' : totalCharges = calcData(numOfDays, dailyRate, servCharges, medCharges);
				   cout << "Number of days spent in the hospital :  " 
				        << setw(10) << numOfDays << endl;
				   cout << "Daily rate                           : $"
				        << setw(10) << dailyRate << endl;
				   break;
		case 'o' :
		case 'O' : totalCharges = calcData(servCharges, medCharges);
		
	}


	cout << "Charges for hospital services        : $" // hospital charges
	     << setw(10) << servCharges << endl;            
	cout << "Pharmacy medication charges          : $" // pharmacy charges
	     << setw(10) << medCharges << endl;
	cout << "Total charges                        : $" // total 
	     << setw(10) << totalCharges << endl;
	
}

/****************************************************************************
 *                          calcData (overloaded)                           *
 * This function accepts the arguments for in-patient data, calculates and  *
 * returns the total charges.                                               *
 ****************************************************************************/
double calcData(int numOfDays, double dailyRate, double servCharges,double medCharges)
{
	return (numOfDays * dailyRate) + calcData(servCharges, medCharges);
}

/****************************************************************************
 *                          calcData (overloaded)                           *
 * This function accepts the arguments for out-patient data, calculates and *
 * returns the total charges.                                               *
 ****************************************************************************/
double calcData(double servCharges, double medCharges)
{
	return servCharges + medCharges;
}