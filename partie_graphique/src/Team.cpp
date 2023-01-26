#include "Team.hpp"

int Team::Id=0;

Team::Team(string name,int rating){
    Name=name;
    Rating=rating;
    Id=Id;
    Id++;
}

Team::Team(){
    Name="name";
    Rating=0;
}

int Team::getRating(){
    return Rating;
}



string Team::getName(){
    return Name;
}

void Team::operator=(Team that){
    Name=that.Name;
    Id=that.Id;
    Rating=that.Rating;
}
