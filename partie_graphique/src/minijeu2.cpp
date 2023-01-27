#include <SFML/Graphics.hpp>
#include "minijeu2.hpp"

minijeu_p::minijeu_p(sf::RenderWindow *window) {

        window->create(VideoMode::getDesktopMode(), "minijeu penalty", Style::Fullscreen);
        window->setFramerateLimit(60);

        // Chargement de l'image de fond
        backgroundTexture.loadFromFile("/../img/stadium.png");
        background.setTexture(backgroundTexture);

        
        font.loadFromFile("arial.ttf");

        //on dessine les differents elements de la cage de football
        cage.setSize(sf::Vector2f(1000, 500));
        cage.setOutlineColor(sf::Color::Red);
        cage.setOutlineThickness(5);
        cage.setPosition(500, 300);


        cible1.setRadius(100);
        cible1.setOutlineColor(sf::Color::Black);
        cible1.setOutlineThickness(5);
        cible1.setPosition(500,600);

        cible2.setRadius(100);
        cible2.setOutlineColor(sf::Color::Black);
        cible2.setOutlineThickness(5);
        cible2.setPosition(500,305);
       
        cible3.setRadius(100);
        cible3.setOutlineColor(sf::Color::Black);
        cible3.setOutlineThickness(5);
        cible3.setPosition(1300,305);
       
        cible4.setRadius(100);
        cible4.setOutlineColor(sf::Color::Black);
        cible4.setOutlineThickness(5);
        cible4.setPosition(1300,600);

        cible5.setRadius(100);
        cible5.setOutlineColor(sf::Color::Black);
        cible5.setOutlineThickness(5);
        cible5.setPosition(900,452);

        A.setString("B");
        A.setFont(font);
        A.setCharacterSize(100);
        A.setStyle(Text::Bold);
        A.setFillColor(Color::Red);
        A.setPosition(565,640);
        
        B.setString("A");
        B.setFont(font);
        B.setCharacterSize(100);
        B.setStyle(Text::Bold);
        B.setFillColor(Color::Red);
        B.setPosition(565,340);

        C.setString("D");
        C.setFont(font);
        C.setCharacterSize(100);
        C.setStyle(Text::Bold);
        C.setFillColor(Color::Red);
        C.setPosition(1360,640);

        D.setString("C");
        D.setFont(font);
        D.setCharacterSize(100);
        D.setStyle(Text::Bold);
        D.setFillColor(Color::Red);
        D.setPosition(1360,340);


        E.setString("E");
        E.setFont(font);
        E.setCharacterSize(100);
        E.setStyle(Text::Bold);
        E.setFillColor(Color::Red);
        E.setPosition(962,490);


        phrase1.setString("C'est le jeu du PENALTY, ecrivez A B C ou D pour marquer \n ATTENTION VOUS AVEZ QU'UNE SEULE CHANCE");
        phrase1.setFont(font);
        phrase1.setCharacterSize(24);
        phrase1.setFillColor(Color::Black);
        phrase1.setPosition(200, 50);


        phrase2.setString("GOAL");
        phrase2.setFont(font);
        phrase2.setCharacterSize(100);
        phrase2.setFillColor(Color::Black);
        phrase2.setPosition(800, 70);
        phrase3.setString("PERDU");
        phrase3.setFont(font);
        phrase3.setFillColor(Color::Black);
        phrase3.setCharacterSize(100);
        phrase3.setPosition(800, 70);


}

void minijeu_p::run(sf::RenderWindow *window) {


    while (window->isOpen())
    {
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::A) {
                window->draw(phrase3);
                window->display();
                sf::sleep(sf::seconds(2));
                window->close();
            } 
            else if (event.key.code == sf::Keyboard::B) {
                window->draw(phrase3);
                window->display();
                sf::sleep(sf::seconds(2));
                window->close();
            }
            else if (event.key.code == sf::Keyboard::C) {
                window->draw(phrase2);
                window->display();
                sf::sleep(sf::seconds(2));
                window->close();
            }
            else if (event.key.code == sf::Keyboard::D) {
                window->draw(phrase3);
                window->display();
                sf::sleep(sf::seconds(2));
                window->close();
            }
            else if (event.key.code == sf::Keyboard::E) {
                window->draw(phrase3);
                window->display();
                sf::sleep(sf::seconds(2));
                window->close();
            }
        
            }
        }
    window->clear();
    window->draw(background);
    window->draw(phrase1);
    window->draw(cage);
    window->draw(cible1);
    window->draw(cible2);
    window->draw(cible3);
    window->draw(cible4);
    window->draw(cible5);
    window->draw(A);
    window->draw(B);
    window->draw(C);
    window->draw(D);
    window->draw(E);


    window->display();
    }
}

// int main()
// {
// minijeu_p game;
// game.run();
// return 0;
// }

