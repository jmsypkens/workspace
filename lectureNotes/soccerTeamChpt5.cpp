//ScratchPad for lecture notes. 

#include <iostream>
using namespace std;

int main() {
    // constants for min and max players per team
    const int min_players = 9,
              max_players = 15; 
    //variables 
    int players,     // number of avail players
        teamSize,    // num of desired play 
        numTeams,    // num of teams
        leftOver;    // num of players leftover
    
    cout << "How many players do you wish per team?\n";
    cout << "(Enter a value in the range "
         << min_players << " - " << max_players << "): ";
    
    cin  >> teamSize; 
    
    // validate input
    while (teamSize < min_players || teamSize > max_players)
    {
        cout << "\n Team size should be "
             << min_players << " to " << max_players << " players.\n";
        cout << "How many players do you wish per team? ";
        
        cin  >> teamSize;
    }
    // get and validate the number of avail players
    cout << "\n How many players are available? ";
    cin  >> players; 
    
    while (players <= 0 )
    { 
        cout << "Please enter a positive number: ";
        cin  >> players;
    }
    // calculate the number of teams and number of leftover players
    numTeams = players / teamSize;
    leftOver = players % teamSize; 
    
    // Displays results
    cout << "\nThere will be " << numTeams << " teams with ";
    cout << leftOver << " players left over.\n";
    return 0; 
}