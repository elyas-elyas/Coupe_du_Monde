#include <SFML/Graphics.hpp>
#include "recshape.hpp"
#include "screen.hpp"
#include <vector>
#include "tournament.hpp"

void mainWindowDraw(sf::RenderWindow *window,vector<Team> visibleTeams)
{
    // c'est ici qu'on dessine tout
    sf::RectangleShape r11;
    sf::RectangleShape r12;
    sf::RectangleShape r13;
    sf::RectangleShape r14;
    sf::RectangleShape r21;
    sf::RectangleShape r22;
    sf::RectangleShape r31;

    sf::RectangleShape r11g;
    sf::RectangleShape r12g;
    sf::RectangleShape r13g;
    sf::RectangleShape r14g;
    sf::RectangleShape r21g;
    sf::RectangleShape r22g;
    sf::RectangleShape r31g;

    vector<sf::RectangleShape*> rectangleVector={&r11,&r12,&r13,&r14,&r11g,&r12g,&r13g,&r14g,&r21,&r22,&r21g,&r22g,&r31,&r31g};
    
    sf::Font font;
    if (!font.loadFromFile("arial.ttf"))
    {
        // error...
    }
    sf::Text tn11;
    sf::Text tn12;
    sf::Text tn13;
    sf::Text tn14;
    sf::Text tn21;
    sf::Text tn22;
    sf::Text tn31;

    sf::Text tn11g;
    sf::Text tn12g;
    sf::Text tn13g;
    sf::Text tn14g;
    sf::Text tn21g;
    sf::Text tn22g;
    sf::Text tn31g;
    vector<sf::Text*> textVector={&tn11,&tn12,&tn13,&tn14,&tn11g,&tn12g,&tn13g,&tn14g,&tn21,&tn22,&tn21g,&tn22g,&tn31,&tn31g};

    sf::Texture texture;

    float ecart=80;
    float yAll=150;
    float ySemi=200;
    float yFinal=280;

    for (long unsigned int i=0 ; i<textVector.size() ; i++){
        textVector[i]->setString("");
    }


    for (long unsigned int i=0 ; i<visibleTeams.size() ; i++)
    {
        textVector[i]->setFont(font);
        textVector[i]->setString(visibleTeams[i].getName());
        textVector[i]->setCharacterSize(24);
        textVector[i]->setStyle(sf::Text::Bold);
        textVector[i]->setFillColor(sf::Color::Black);
    }

    teamContainer(&r11, textVector[0] ,30, yAll);
    teamContainer(&r12, textVector[1] ,30,yAll+ecart);
    teamContainer(&r13, textVector[2] ,30,yAll+2*ecart);
    teamContainer(&r14, textVector[3] ,30,yAll+3*ecart);
    teamContainer(&r21, textVector[8] ,160, ySemi);
    teamContainer(&r22, textVector[9] ,160,ySemi+2*ecart);
    teamContainer(&r31, textVector[12] ,290,yFinal);

    teamContainer(&r11g, textVector[4] ,670, yAll);
    teamContainer(&r12g, textVector[5] ,670,yAll+ecart);
    teamContainer(&r13g, textVector[6] ,670,yAll+2*ecart);
    teamContainer(&r14g, textVector[7] ,670,yAll+3*ecart);
    teamContainer(&r21g, textVector[10] ,540, ySemi);
    teamContainer(&r22g, textVector[11] ,540,ySemi+2*ecart);
    teamContainer(&r31g, textVector[13] ,410,yFinal);

    if(!texture.loadFromFile("../img/fifa.jpg"))
        cout<<"couldn't load fifa.jpg \n" ;
    
    sf::Sprite sprite(texture);

    window->draw(sprite);

    for (auto it = rectangleVector.begin(); it != rectangleVector.end(); it++)
    {
        window->draw(**it);
    }
    
    for (auto it = textVector.begin(); it != textVector.end(); it++)
    {
        window->draw(**it);
    }
}

