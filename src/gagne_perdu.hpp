#include <SFML/Graphics.hpp>
#include <string>

class Affichage
{
protected:
    sf::RenderWindow window;
    sf::Text text;
    sf::Font font;

public:
    Affichage()
    {
        window.create(sf::VideoMode(800, 600), "Affichage");
        font.loadFromFile("arial.ttf");
        text.setFont(font);
        text.setCharacterSize(24);
        text.setFillColor(sf::Color::Black);
        text.setPosition(sf::Vector2f(400, 300));
        
    }

    virtual void run(std::string message)
    {
        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            text.setString(message);
            text.setOrigin(text.getLocalBounds().width/2, text.getLocalBounds().height/2);
            window.draw(text);
            window.display();
        }
    }
};

class Gagne : public Affichage
{
public:
    Gagne()
    {
        text.setString("VOUS AVEZ GAGNE !!");
        text.setOrigin(text.getLocalBounds().width/2, text.getLocalBounds().height/2);
    }
};

class Perdu : public Affichage
{
public:
    Perdu()
    {
        text.setString("Vous avez perdu...");
        text.setOrigin(text.getLocalBounds().width/2, text.getLocalBounds().height/2);
    }
};
