#include "game.hh"
#include <map>
#include <random>
#include <time.h>

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
int main(){
    int gameSize=4;
    game a;
    map<string,int> teams;
    teams["FRA"]=100;
    teams["BRA"]=110;
    teams["USA"]=95;
    teams["MAR"]=105;

    //cout<< " " <<endl;
    cout<< "This is main " <<endl;
    a.setSize(gameSize);
    a.getSize();

    string gagnant=randomAb() ? "FRA" : "BRA";
    
    //cout << "le gagnant est : "<<teams.begin()->first <<endl;
    
    for (std::map<string,int>::iterator it=teams.begin(); it!=teams.end(); ++it)
        std::cout << it->first << " => " << it->second << '\n';

    return 0;
}