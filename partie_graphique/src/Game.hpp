#include <iostream>
#include <string>
#include <map>
#include "Team.hpp"
#include<vector>

class Game
{
private:
    static bool InGame;
    int Size;
    map <string,int> GameState;
    vector<Team> TeamsVect;
    vector<Team> Winners;

public:
    Game(vector<Team> _teamsVect);
    int getSize();
    void setSize(int newSize);
    void recordWin(Team _winner);
    void nextRound();
    vector<Team> getTeams();
    vector<Team> getWinners();
};

