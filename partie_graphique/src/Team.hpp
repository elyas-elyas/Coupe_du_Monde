#include <iostream>
#include <string>

using namespace std;


class Team
{
private:
    static int Id;
    string Name;
    int Rating;
public:
    Team(string name,int rating);
    Team();
    string getName();
    int getRating();
    void operator=(Team that);
};


