#include<iostream>
#include<SFML/Graphics.hpp>        
#include <list>    
#include <random> 
using namespace sf;
using namespace std;

int main()
{
	RenderWindow window(VideoMode::getDesktopMode(), "Inazuma Eleven", Style::Fullscreen);
	window.setFramerateLimit(60);

    // on fait tourner le programme tant que la fenêtre n'a pas été fermée
    while (window.isOpen())
    {
        // on traite tous les évènements de la fenêtre qui ont été générés depuis la dernière itération de la boucle
        sf::Event event;
        while (window.pollEvent(event))
        {
            // fermeture de la fenêtre lorsque l'utilisateur le souhaite
            if (event.type == sf::Event::Closed || event.key.code == Keyboard::Escape)
                window.close();
        }

        // effacement de la fenêtre en noir
        window.clear(sf::Color::Black);



        RectangleShape cage;
        CircleShape cible1;
        CircleShape cible2;
        CircleShape cible3;
        CircleShape cible4;
        CircleShape cible5;
    
        Font font;
        font.loadFromFile("arial.ttf");

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

        Text A("B", font);
        A.setCharacterSize(100);
        A.setStyle(Text::Bold);
        A.setFillColor(Color::Red);
        A.setPosition(565,640);
        

        Text B("A", font);
        B.setCharacterSize(100);
        B.setStyle(Text::Bold);
        B.setFillColor(Color::Red);
        B.setPosition(565,340);


        Text C("D", font);
        C.setCharacterSize(100);
        C.setStyle(Text::Bold);
        C.setFillColor(Color::Red);
        C.setPosition(1360,640);

        Text D("C", font);
        D.setCharacterSize(100);
        D.setStyle(Text::Bold);
        D.setFillColor(Color::Red);
        D.setPosition(1360,340);

        Text E("E", font);
        E.setCharacterSize(100);
        E.setStyle(Text::Bold);
        E.setFillColor(Color::Red);
        E.setPosition(962,490);

        
        window.draw(cage);
        window.draw(cible1);
        window.draw(cible2);
        window.draw(cible3);
        window.draw(cible4);
        window.draw(cible5);
        window.draw(A);
        window.draw(B);
        window.draw(C);
        window.draw(D);
        window.draw(E);


            // fin de la frame courante, affichage de tout ce qu'on a dessiné
        window.display();
    }

    return 0;
}

