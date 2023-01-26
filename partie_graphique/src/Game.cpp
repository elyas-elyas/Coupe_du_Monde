#include "Game.hpp"


Game::Game(vector<Team> _teamsVect){
    TeamsVect=_teamsVect;
    Winners=_teamsVect;
}


int Game::getSize(){
    cout << "your game size is : "<< Size <<endl;
    return Size;
}

void Game::setSize(int newSize){
    Size=newSize;
}

void Game::recordWin(Team _winner){
    Winners.push_back(_winner);
    cout<< "    winner is =>" << _winner.getName() << endl;
}

void Game::nextRound(){
    TeamsVect=Winners;
    Winners.clear();
}

vector<Team> Game::getTeams(){
    return TeamsVect;
}

vector<Team> Game::getWinners(){
    return Winners;
}


