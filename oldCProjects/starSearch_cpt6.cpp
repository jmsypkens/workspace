/****************************************************************************************************
* Jerry M. Sypkens  
* COS 393 - 8100 Prof. P. Ghaforyfard 
* Module 6 Homework Due March 29, 2016 - 8. Star Search 
* 
* 8. Star Search
* 
* A particular talent competition has 5 judges, 
* each of whom awards a score between 0 and 10 to each performer. 
* 
* Fractional scores, such as 8.3, are allowed. 
* A performer’s ﬁnal score is determined by dropping the highest and lowest score received, 
* then averaging the 3 remaining scores. 
* 
* Write a program that uses these rules to calculate and display a
* contestant’s score. It should include the following functions:
* 
*           • void getJudgeData() should ask the user for a judge’s score, store it in a reference
* parameter variable, and validate it. This function should be called by main once for each
* of the 5 judges.
*           
*           • double calcScore() should calculate and return the average of the 3 scores that
* remain after dropping the highest and lowest scores the performer received. This
* function should be called just once by main and should be passed the 5 scores.
* Two additional functions, described below, should be called by calcScore, which uses the
* returned information to determine which of the scores to drop.
* 
*           • int findLowest() should find and return the lowest of the 5 scores passed to it.
*           
*           • int findHighest() should find and return the highest of the 5 scores passed to it. 
*****************************************************************************************************/
#include <iostream>
using namespace std;

// function prototypes 
void getJudgeData(double &);
double calcScore(double, double, double, double, double);
int findHighest(double, double, double, double, double);
int findLowest(double, double, double, double, double);

int main() 
{ 
    double score1, score2, score3, score4, score5; 
    
    cout << endl;
    cout << "This program is used to calculate the performer's score.\n"
         << "--------------------------------------------------------\n\n"; 
         
    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5); 
    
    cout << endl; 
    cout << "The performer's score is: ";
    cout << calcScore(score1, score2, score3, score4, score5); 
    cout << endl; 
    
    return 0;
}


/*********************************************************************************
*                              getJudgeData()                                     
*     Function will ask the user for a judge's score, store it in a        
*     reference parameter variable, and validate it.                            
*********************************************************************************/

void getJudgeData(double &score)
{
    do 
    {   static int numCalls = 0; 
    
        cout << "Please enter judge " << ++numCalls << " score: "; 
        cin  >> score; 
        
        if (score < 0 || score > 10)
            cout << "\nERROR INVALID ENTRY.\n"
                 << "Entry must be 0 or more and less than 10.\n\n";
        
    } while (score <= 0 || score >= 10); 
}

/********************************************************************************
*                               calcScore()                                      
* Calculates and returns the average of the 3 scores that remain after dropping 
* highest and lowest scores.
********************************************************************************/

double calcScore(double score1, double score2, double score3, double score4, double score5)
{	
	int    highScore,
		   lowScore;
	double average; 

	highScore = findHighest(score1, score2, score3, score4, score5);	
	lowScore  = findLowest(score1, score2, score3, score4, score5);

	if (highScore == static_cast<int>(score1))   // // static_cast<''> turns double into int to compare to 'highScore' which is int 
	{
		if (lowScore == static_cast<int>(score2))
			average = (score3 + score4 + score5) / 3;
		else if (lowScore == static_cast<int>(score3))
			average = (score2 + score4 + score5) / 3;
		else if (lowScore == static_cast<int>(score4))
			average = (score3 + score2 + score5) / 3;
		else
			average = (score2 + score3 + score4) / 3;
	}
	else if (highScore == static_cast<int>(score2))
	{
		if (lowScore == static_cast<int>(score1))
			average = (score3 + score4 + score5) / 3;
		else if (lowScore == static_cast<int>(score3))
			average = (score1 + score4 + score5) / 3;
		else if (lowScore == static_cast<int>(score4))
			average = (score3 + score1 + score5) / 3;
		else
			average = (score1 + score3 + score4) / 3;
	}
	else if (highScore == static_cast<int>(score3))
	{
		if (lowScore == static_cast<int>(score2))
			average = (score1 + score4 + score5) / 3;
		else if (lowScore == static_cast<int>(score1))
			average = (score2 + score4 + score5) / 3;
		else if (lowScore == static_cast<int>(score4))
			average = (score1 + score2 + score5) / 3;
		else
			average = (score2 + score1 + score4) / 3;
	}
	else if (highScore == static_cast<int>(score4))
	{
		if (lowScore == static_cast<int>(score2))
			average = (score3 + score1 + score5) / 3;
		else if (lowScore == static_cast<int>(score3))
			average = (score2 + score1 + score5) / 3;
		else if (lowScore == static_cast<int>(score1))
			average = (score3 + score2 + score5) / 3;
		else
			average = (score2 + score3 + score1) / 3;
	}
	else
	{
		if (lowScore == static_cast<int>(score2))
			average = (score3 + score4 + score1) / 3;
		else if (lowScore == static_cast<int>(score3))
			average = (score2 + score4 + score1) / 3;
		else if (lowScore == static_cast<int>(score4))
			average = (score3 + score2 + score1) / 3;
		else
			average = (score2 + score3 + score4)/3;
	}

	return average;
}

/********************************************************************************
*                             findHighest                                      
* This function finds and returns the Highest of 5 scores passed to it  
********************************************************************************/
int findHighest(double score1, double score2, double score3, double score4,
			    double score5)
{
	if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5)
		return score1;
	else if (score2 > score1 && score2 > score3 && score2 > score4 &&
			 score2 > score5)
		return score2;
	else if (score3 > score2 && score3 > score1 && score3 > score4 &&
			 score3 > score5)
		return score3;
	else if (score4 > score2 && score4 > score3 && score4 > score1 &&
			 score4 > score5)
		return score4;
	else
		return score5;
}

/*******************************************************************************
*                             findLowest()                                      
* This function finds and returns the lowest of 5 scores passed to it   
*******************************************************************************/
int findLowest(double score1, double score2, double score3, double score4, double score5)
{
	if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
		return score1;
	else if (score2 < score1 && score2 < score3 && score2 < score4 &&
			 score2 < score5)
		return score2;
	else if (score3 < score2 && score3 < score1 && score3 < score4 &&
		     score3 < score5)
		return score3;
	else if (score4 < score2 && score4 < score3 && score4 < score1 &&
			 score4 < score5)
		return score4;
	else
		return score5;
}