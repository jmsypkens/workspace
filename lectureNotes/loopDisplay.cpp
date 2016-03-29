// this program displays the numbers 1-20
// using while loops 
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int num = 1;
    
    cout << "Number  Square\n";
    cout << "--------------\n";
    
    while (num <= 20)
    {
        cout << setw(4) << num << setw(7) << (num * num) << endl;
        num++;  //increment counter
    }
    return 0;
}