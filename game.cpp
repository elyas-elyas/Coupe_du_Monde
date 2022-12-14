#include "game.hh"


int game::getSize(){
    cout << "your game size is : "<< Size <<endl;
    return Size;
}

void game::setSize(int newSize){
    Size=newSize;
}