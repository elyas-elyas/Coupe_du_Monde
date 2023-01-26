#include <iostream>
#include <SFML/Graphics.hpp>


using namespace std;

void teamContainer(sf::RectangleShape *entity,float x, float y){
    entity->setSize(sf::Vector2f(100, 50));
    entity->setOutlineColor(sf::Color::Blue);
    entity->setOutlineThickness(5);
    entity->setPosition(x, y);
}

