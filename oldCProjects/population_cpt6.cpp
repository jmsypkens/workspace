/****************************************************************************************************
* Jerry M. Sypkens  
* COS 393 - 8100 Prof. P. Ghaforyfard 
* Module 6 Homework Due March 29, 2016 - 15. Population 
* 
* 15. Population
* In a population, the birth rate is the percentage increase of the population due
* to births and the death rate is the percentage decrease of the population due to
* deaths. 
* 
* Write a program that asks for the following:
*	• The starting size of a population
*	• The annual birth rate
*	• The annual death rate
*	• The number of years to display
* 
* The program should then display the starting population and the projected
* population at the end of each year. It should use a function that calculates and
* returns the projected new size of the population after a year. 
* 
* The formula is:
*	N = P(1 + B)(1 - D)
* 
* where N is the new population size, P is the previous population size, B is the birth rate, and
* D is the death rate. Annual birth rate and death rate are the typical number of births and
* deaths in a year per 1000 people, expressed as a decimal. So, for example, if there are
* normally about 32 births and 26 deaths per 1000 people in a given population, the birth
* rate would be .032 and the death rate would be .026.
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(int&, double&, double&, int&);
int projYear(int, double, double);

int main()
{
	int     startPopulation,	// The starting size of a population
			numYrs,	// The number of years to display
			projectedPop;	// the projected population at the end of each year
	
	double birthRate,	// The annual birth rate
		   deathRate; 	// The annual death rate

	// Display introduction
	cout << "\nThis program projects and displays the "
		 << "population at the end of each year.\n";

	// Call function getData
	getData(startPopulation, birthRate, deathRate, numYrs);

	// Display Table with results
	cout << "\n           Population Projection Table\n"
		 << "   Year   Starting population   Projected Population\n"
		 << "--------------------------------------------------------\n";

	// Call function projYear and display results for each year 
	for (int yr = 1; yr <= numYrs; yr++)
	{
		projectedPop = projYear(startPopulation, birthRate, deathRate);

		cout << setw(7) << yr << "      " << setw(13) << startPopulation;
		cout << "             " << setw(13) << projectedPop << endl;

		startPopulation = projectedPop;
	}

	return 0;
}

/******************************************************************************
*                              projYear()                                        
* This funcion accepts starting size of the population, the    
* annual birth rate and the annual death rate arguments. 
* Then it calculates & returns the proj new size of population after a year.                         
******************************************************************************/

int projYear(int startPopulation, double birthRate, double deathRate)
{
	birthRate = birthRate * .01;							// expresses birth and death rate as decimal percentages
	deathRate = deathRate * .01;
	return startPopulation * (1 + birthRate) * (1 - deathRate); // N = P(1 + B)(1 - D)
}

/**************************************************************************
*                             getData()                                      
* This function asks the user for the starting population, the   
* annual birth rate, the annual death rate and the number of years the user wants 
* to display. Saves data in reference parameters.                 
***************************************************************************/

void getData(int& startPopulation, double& birthRate, double& deathRate, int& numYrs)
{
	do
	{
		cout << "What is the starting size of the population? ";
		cin  >> startPopulation;

	} while (startPopulation < 2); // validations

	do
	{
		cout << "What is the annual birth rate? ";
		cin  >> birthRate;

	} while (birthRate < 0);

	do
	{
		cout << "What is the annual death rate? ";
		cin  >> deathRate;

	} while (deathRate < 0);

	do
	{
		cout << "How many years to display? ";
		cin  >> numYrs;

	} while (numYrs < 1);
}