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

void showMessage(sf::RenderWindow *window,std::string message){
    sf::Text text;
    sf::Font font;

    font.loadFromFile("arial.ttf");
    text.setFont(font);
    text.setCharacterSize(48);
    text.setFillColor(sf::Color::Black);
    text.setPosition(sf::Vector2f(400, 300));
    text.setString(message);
    text.setOrigin(text.getLocalBounds().width/2, text.getLocalBounds().height/2);
    window->draw(text);
}

