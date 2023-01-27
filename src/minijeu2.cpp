#include <SFML/Graphics.hpp>
#include "minijeu2.hpp"

minijeu_p::minijeu_p(sf::RenderWindow *window) {

        window->create(VideoMode(800, 600), "minijeu penalty");
        
        window->setFramerateLimit(60);

        // Chargement de l'image de fond
        backgroundTexture.loadFromFile("../img/stadium800.jpeg");
        background.setTexture(backgroundTexture);

        
        font.loadFromFile("arial.ttf");

        //on dessine les differents elements de la cage de football
        cage.setSize(sf::Vector2f(400, 300));
        cage.setOutlineColor(sf::Color::Red);
        cage.setOutlineThickness(5);
        cage.setPosition(225, 175);


        cible1.setRadius(50);
        cible1.setOutlineColor(sf::Color::Black);
        cible1.setOutlineThickness(5);
        cible1.setPosition(230,180);

        cible2.setRadius(50);
        cible2.setOutlineColor(sf::Color::Black);
        cible2.setOutlineThickness(5);
        cible2.setPosition(230,370);
       
        cible3.setRadius(50);
        cible3.setOutlineColor(sf::Color::Black);
        cible3.setOutlineThickness(5);
        cible3.setPosition(520,370);
       
        cible4.setRadius(50);
        cible4.setOutlineColor(sf::Color::Black);
        cible4.setOutlineThickness(5);
        cible4.setPosition(520,180);

        cible5.setRadius(50);
        cible5.setOutlineColor(sf::Color::Black);
        cible5.setOutlineThickness(5);
        cible5.setPosition(375,275);

        A.setString("B");
        A.setFont(font);
        A.setCharacterSize(70);
        A.setStyle(Text::Bold);
        A.setFillColor(Color::Red);
        A.setPosition(258,380);
        
        B.setString("A");
        B.setFont(font);
        B.setCharacterSize(70);
        B.setStyle(Text::Bold);
        B.setFillColor(Color::Red);
        B.setPosition(258,180);

        C.setString("D");
        C.setFont(font);
        C.setCharacterSize(70);
        C.setStyle(Text::Bold);
        C.setFillColor(Color::Red);
        C.setPosition(548,380);

        D.setString("C");
        D.setFont(font);
        D.setCharacterSize(70);
        D.setStyle(Text::Bold);
        D.setFillColor(Color::Red);
        D.setPosition(545,180);


        E.setString("E");
        E.setFont(font);
        E.setCharacterSize(70);
        E.setStyle(Text::Bold);
        E.setFillColor(Color::Red);
        E.setPosition(400,280);


        phrase1.setString("C'est le jeu du PENALTY, ecrivez A B C ou D pour marquer \n ATTENTION VOUS AVEZ QU'UNE SEULE CHANCE");
        phrase1.setFont(font);
        phrase1.setCharacterSize(24);
        phrase1.setFillColor(Color::Red);
        phrase1.setPosition(100, 50);


        phrase2.setString("GOAL");
        phrase2.setFont(font);
        phrase2.setCharacterSize(50);
        phrase2.setFillColor(Color::Black);
        phrase2.setPosition(350, 100);
        phrase3.setString("PERDU");
        phrase3.setFont(font);
        phrase3.setFillColor(Color::Black);
        phrase3.setCharacterSize(50);
        phrase3.setPosition(350, 100);


}

void minijeu_p::run(sf::RenderWindow *window, int *result2) {

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
                *result2=1;
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

/* int main()
{
minijeu_p game;
game.run();
return 0;
}
 */
