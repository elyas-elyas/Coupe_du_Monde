#include "Game.hh" 
#include <map>
#include <random>
#include <time.h>
#include <vector>
#include <cassert>

using namespace std;


int scanParam(){
    cout<< "please enter the game size" <<endl;

    int x;
    cin >> x;
    return x;
}

int randomAb(){
    srand (time(NULL));
    return rand()%2;
}

Team calculateWinner(Team team1 ,Team team2){
    srand (time(NULL));
    return rand()%(team1.getRating()+team2.getRating()) < team1.getRating() ? team1 : team2 ;
}

void playRound(Game *mainGame){
    auto teams = mainGame->getTeams();
    assert(teams.size() > 1 && teams.size()%2 == 0);

    int matchNumber=1;
    for (vector<Team>::iterator it = teams.begin(); it < teams.end(); it=it+2)
    {   
        Team winner;
        Team team1 = *it;
        Team team2 = *(it+1);

        cout<< "playing match : "<<matchNumber<< endl;
        cout << " between : " << team1.getName() << " and " << team2.getName() << endl;

        winner=calculateWinner(team1,team2);
        mainGame->recordWin(winner);

        matchNumber++;
    }
}


int main(){
    int gameSize=8;
    vector<int> winners;
    Team t1("FRA",100);
    Team t2("BRA",110);
    Team t3("USA",80);
    Team t4("MAR",90);
    Team t5("TUN",75);
    Team t6("ARG",120);
    Team t7("BLG",70);
    Team t8("GER",75);
    vector<Team> teams{t1,t2,t3,t4,t5,t6,t7,t8};

    Game mainGame( teams );

    mainGame.setSize(gameSize);
    cout <<"teams is of size = " <<teams.size()<< endl;

    cout<< "Starting Game ... " <<endl;
    
    playRound(&mainGame);
    mainGame.nextRound();
    playRound(&mainGame);
    mainGame.nextRound();
    playRound(&mainGame);
    

    
    
    return 0;
}