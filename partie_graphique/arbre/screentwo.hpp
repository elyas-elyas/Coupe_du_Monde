#include <SFML/Graphics.hpp>
#include "recshape.hpp"
#include "screen.hpp"


void mainWindowDraw(sf::RenderWindow *window)
{
    // c'est ici qu'on dessine tout
    sf::RectangleShape rectangleG;
    sf::RectangleShape rectangle2G;
    sf::RectangleShape rectangle3G;
    sf::RectangleShape rectangle4G;
    sf::RectangleShape rectangle11G;
    sf::RectangleShape rectangle12G;
    sf::RectangleShape rectangle20G;

    sf::RectangleShape rectangleD;
    sf::RectangleShape rectangle2D;
    sf::RectangleShape rectangle3D;
    sf::RectangleShape rectangle4D;
    sf::RectangleShape rectangle11D;
    sf::RectangleShape rectangle12D;
    sf::RectangleShape rectangle20D;

    sf::Texture texture;


    float ecart=80;
    float yAll=150;
    float ySemi=200;
    float yFinal=280;

    teamContainer(&rectangleG, 30, yAll);
    teamContainer(&rectangle2G, 30,yAll+ecart);
    teamContainer(&rectangle3G, 30,yAll+2*ecart);
    teamContainer(&rectangle4G, 30,yAll+3*ecart);
    teamContainer(&rectangle11G, 160, ySemi);
    teamContainer(&rectangle12G, 160,ySemi+2*ecart);
    teamContainer(&rectangle20G, 290,yFinal);

    teamContainer(&rectangleD, 670, yAll);
    teamContainer(&rectangle2D, 670,yAll+ecart);
    teamContainer(&rectangle3D, 670,yAll+2*ecart);
    teamContainer(&rectangle4D, 670,yAll+3*ecart);
    teamContainer(&rectangle11D, 540, ySemi);
    teamContainer(&rectangle12D, 540,ySemi+2*ecart);
    teamContainer(&rectangle20D, 410,yFinal);


    if(!texture.loadFromFile("fifa.jpg"))
        return ;
    
    sf::Sprite sprite(texture);

    window->draw(sprite);

    window->draw(rectangleG);
    window->draw(rectangle2G);
    window->draw(rectangle3G);
    window->draw(rectangle4G);
    window->draw(rectangle11G);
    window->draw(rectangle12G);
    window->draw(rectangle20G);

    window->draw(rectangleD);
    window->draw(rectangle2D);
    window->draw(rectangle3D);
    window->draw(rectangle4D);
    window->draw(rectangle11D);
    window->draw(rectangle12D);
    window->draw(rectangle20D);
    
}