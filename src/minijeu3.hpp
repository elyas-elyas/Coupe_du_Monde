#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

class minijeu3
{
    public:
        minijeu3(sf::RenderWindow *window);
        void run(sf::RenderWindow *window);

    private:
        sf::RenderWindow window;
        sf::Text question1;
        sf::Text question2;
        sf::Text question3;
        sf::Text answer1;
        sf::Text answer2;
        sf::Text answer3;
        sf::Event event;
};