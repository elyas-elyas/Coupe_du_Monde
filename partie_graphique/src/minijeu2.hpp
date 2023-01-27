#include <SFML/Graphics.hpp>
using namespace sf;


class minijeu_p
{
    public:
        minijeu_p(sf::RenderWindow *window);
        void run(sf::RenderWindow *window);

    private:

        sf::RenderWindow window;
        sf::Event event;
        sf::Texture backgroundTexture;
        sf::Sprite  background;

        RectangleShape cage;
        CircleShape cible1;
        CircleShape cible2;
        CircleShape cible3;
        CircleShape cible4;
        CircleShape cible5;

        sf::Text A;
        sf::Text B;
        sf::Text C;
        sf::Text D;
        sf::Text E;
        sf::Text phrase1;
        sf::Text phrase2;
        sf::Text phrase3;
        Font font;

};
