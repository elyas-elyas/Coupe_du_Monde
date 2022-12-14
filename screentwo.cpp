#include <SFML/Graphics.hpp>
#include "recshape.hpp"

int main()
{
    // création de la fenêtre
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    // on fait tourner le programme tant que la fenêtre n'a pas été fermée
    while (window.isOpen())
    {
        // on traite tous les évènements de la fenêtre qui ont été générés depuis la dernière itération de la boucle
        sf::Event event;
        while (window.pollEvent(event))
        {
            // fermeture de la fenêtre lorsque l'utilisateur le souhaite
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // effacement de la fenêtre en noir
        window.clear(sf::Color::Black);

        // c'est ici qu'on dessine tout
        sf::RectangleShape rectangle;
        sf::RectangleShape rectangle2;
        sf::RectangleShape line(sf::Vector2f(150, 5));
        // line.rotate(45);

    rectangle.setSize(sf::Vector2f(100, 50));
    rectangle.setOutlineColor(sf::Color::Red);
    rectangle.setOutlineThickness(5);
    rectangle.setPosition(10, 20);
    rectangle2.setSize(sf::Vector2f(100, 50));
    rectangle2.setOutlineColor(sf::Color::Red);
    rectangle2.setOutlineThickness(5);
    rectangle2.setPosition(10, 100);
    window.draw(rectangle);
    window.draw(rectangle2);
    window.draw(line);


        // fin de la frame courante, affichage de tout ce qu'on a dessiné
        window.display();
    }

    return 0;
}