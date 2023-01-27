#include <iostream>
#include <SFML/Graphics.hpp>
#include <assert.h>


using namespace std;

void teamContainer(sf::RectangleShape *entity,sf::Text *name,float x, float y){
    entity->setSize(sf::Vector2f(100, 50));
    entity->setOutlineColor(sf::Color::Blue);
    entity->setOutlineThickness(5);
    entity->setPosition(x, y);

    name->setPosition(x+25,y+10);
}

