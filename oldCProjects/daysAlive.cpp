#include <ctime>
#include <iostream>
using namespace std; 

int main() {
  double month = 0,
  		 day = 0,
  		 year = 0,
  		 yearsLived = 0,
  		 daysOfYearsLived = 0,
  		 totalDaysLived = 0,
  		 remainingDays = 0,
  		 thisYear = 0;
  
  time_t t = time(0);   // get time now
  struct tm * now = localtime( & t );
  
  cout << "Please enter your birthday using numbers.\n";
  cout << "Month: " << endl;
  cin  >> month;
  cout << "Day: " << endl; 
  cin  >> day;
  cout << "Year: " << endl; 
  cin  >> year; 
  
  
    cout << "Today's Date is: " << (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << endl;

 thisYear = (now->tm_year + 1900);         
 yearsLived = thisYear - year;
 daysOfYearsLived = yearsLived * 365;
 
 // need to fix this to accomadate months with 30 / 31 days an leap years 
 remainingDays = ((month-1) * 30) + day;
 
 totalDaysLived = daysOfYearsLived + remainingDays;
 
 cout << "You have been alive roughly: " << totalDaysLived << " days. Congratulations for living!" << endl; 
 
  return 0; 
}