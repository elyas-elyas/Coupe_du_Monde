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
        sf::RectangleShape rectangleG;
        sf::RectangleShape rectangle2G;
        sf::RectangleShape rectangle3G;
        sf::RectangleShape rectangle4G;
        sf::RectangleShape rectangle5G;
        sf::RectangleShape rectangle6G;
        sf::RectangleShape rectangle7G;
        sf::RectangleShape rectangle8G;
        sf::RectangleShape rectangle9G;
        sf::RectangleShape rectangle10G;
        sf::RectangleShape rectangle11G;
        sf::RectangleShape rectangle12G;
        sf::RectangleShape rectangle13G;
        sf::RectangleShape rectangle14G;
        sf::RectangleShape rectangle15G;

        sf::RectangleShape rectangleD;
        sf::RectangleShape rectangle2D;
        sf::RectangleShape rectangle3D;
        sf::RectangleShape rectangle4D;
        sf::RectangleShape rectangle5D;
        sf::RectangleShape rectangle6D;
        sf::RectangleShape rectangle7D;
        sf::RectangleShape rectangle8D;
        sf::RectangleShape rectangle9D;
        sf::RectangleShape rectangle10D;
        sf::RectangleShape rectangle11D;
        sf::RectangleShape rectangle12D;
        sf::RectangleShape rectangle13D;
        sf::RectangleShape rectangle14D;
        sf::RectangleShape rectangle15D;

        sf::RectangleShape lineG(sf::Vector2f(100, 5));
        sf::RectangleShape line2G(sf::Vector2f(100, 5));
        sf::RectangleShape line3G(sf::Vector2f(100, 5));
        sf::RectangleShape line4G(sf::Vector2f(100, 5));
        sf::RectangleShape line5G(sf::Vector2f(100, 5));
        sf::RectangleShape line6G(sf::Vector2f(100, 5));
        sf::RectangleShape line7G(sf::Vector2f(100, 5));
        sf::RectangleShape line8G(sf::Vector2f(100, 5));

        sf::RectangleShape line9G(sf::Vector2f(100, 5));
        line9G.rotate(90);
        sf::RectangleShape line10G(sf::Vector2f(100, 5));
        line10G.rotate(90);
        sf::RectangleShape line11G(sf::Vector2f(100, 5));
        line11G.rotate(90);
        sf::RectangleShape line12G(sf::Vector2f(100, 5));
        line12G.rotate(90);
        sf::RectangleShape line13G(sf::Vector2f(100, 5));
        line13G.rotate(90);

        sf::Texture texture;



    rectangleG.setSize(sf::Vector2f(100, 50));
    rectangleG.setOutlineColor(sf::Color::Red);
    rectangleG.setOutlineThickness(5);
    rectangleG.setPosition(10, 20);
    lineG.setPosition(50,30);

    rectangle2G.setSize(sf::Vector2f(100, 50));
    rectangle2G.setOutlineColor(sf::Color::Red);
    rectangle2G.setOutlineThickness(5);
    rectangle2G.setPosition(10, 90);
    line2G.setPosition(50,130);

    rectangle3G.setSize(sf::Vector2f(100, 50));
    rectangle3G.setOutlineColor(sf::Color::Red);
    rectangle3G.setOutlineThickness(5);
    rectangle3G.setPosition(10, 170);
    line3G.setPosition(50,180);

    rectangle4G.setSize(sf::Vector2f(100, 50));
    rectangle4G.setOutlineColor(sf::Color::Red);
    rectangle4G.setOutlineThickness(5);
    rectangle4G.setPosition(10, 240);
    line4G.setPosition(50,280);

    rectangle5G.setSize(sf::Vector2f(100, 50));
    rectangle5G.setOutlineColor(sf::Color::Red);
    rectangle5G.setOutlineThickness(5);
    rectangle5G.setPosition(10, 320);
    line5G.setPosition(50,330);

    rectangle6G.setSize(sf::Vector2f(100, 50));
    rectangle6G.setOutlineColor(sf::Color::Red);
    rectangle6G.setOutlineThickness(5);
    rectangle6G.setPosition(10, 390);
    line6G.setPosition(50,430);

    rectangle7G.setSize(sf::Vector2f(100, 50));
    rectangle7G.setOutlineColor(sf::Color::Red);
    rectangle7G.setOutlineThickness(5);
    rectangle7G.setPosition(10, 470);
    line7G.setPosition(50,480);

    rectangle8G.setSize(sf::Vector2f(100, 50));
    rectangle8G.setOutlineColor(sf::Color::Red);
    rectangle8G.setOutlineThickness(5);
    rectangle8G.setPosition(10, 540);
    line8G.setPosition(50,580);

    rectangle9G.setSize(sf::Vector2f(100, 50));
    rectangle9G.setOutlineColor(sf::Color::Red);
    rectangle9G.setOutlineThickness(5);
    rectangle9G.setPosition(140, 55);

    rectangle10G.setSize(sf::Vector2f(100, 50));
    rectangle10G.setOutlineColor(sf::Color::Red);
    rectangle10G.setOutlineThickness(5);
    rectangle10G.setPosition(140, 205);

    rectangle11G.setSize(sf::Vector2f(100, 50));
    rectangle11G.setOutlineColor(sf::Color::Red);
    rectangle11G.setOutlineThickness(5);
    rectangle11G.setPosition(140, 355);

    rectangle12G.setSize(sf::Vector2f(100, 50));
    rectangle12G.setOutlineColor(sf::Color::Red);
    rectangle12G.setOutlineThickness(5);
    rectangle12G.setPosition(140, 505);
   
    rectangle13G.setSize(sf::Vector2f(100, 50));
    rectangle13G.setOutlineColor(sf::Color::Red);
    rectangle13G.setOutlineThickness(5);
    rectangle13G.setPosition(240, 130);

    rectangle14G.setSize(sf::Vector2f(100, 50));
    rectangle14G.setOutlineColor(sf::Color::Red);
    rectangle14G.setOutlineThickness(5);
    rectangle14G.setPosition(240, 430);

    rectangle15G.setSize(sf::Vector2f(100, 50));
    rectangle15G.setOutlineColor(sf::Color::Yellow);
    rectangle15G.setOutlineThickness(5);
    rectangle15G.setPosition(280, 280);

    
    rectangleD.setSize(sf::Vector2f(100, 50));
    rectangleD.setOutlineColor(sf::Color::Blue);
    rectangleD.setOutlineThickness(5);
    rectangleD.setPosition(690, 20);

    rectangle2D.setSize(sf::Vector2f(100, 50));
    rectangle2D.setOutlineColor(sf::Color::Blue);
    rectangle2D.setOutlineThickness(5);
    rectangle2D.setPosition(690, 90);
    // line2G.setPosition(50,110);

    rectangle3D.setSize(sf::Vector2f(100, 50));
    rectangle3D.setOutlineColor(sf::Color::Blue);
    rectangle3D.setOutlineThickness(5);
    rectangle3D.setPosition(690, 170);
    // line3G.setPosition(50,190);

    rectangle4D.setSize(sf::Vector2f(100, 50));
    rectangle4D.setOutlineColor(sf::Color::Blue);
    rectangle4D.setOutlineThickness(5);
    rectangle4D.setPosition(690, 240);
    // line4G.setPosition(50,260);

    rectangle5D.setSize(sf::Vector2f(100, 50));
    rectangle5D.setOutlineColor(sf::Color::Blue);
    rectangle5D.setOutlineThickness(5);
    rectangle5D.setPosition(690, 320);
    // line5G.setPosition(50,340);

    rectangle6D.setSize(sf::Vector2f(100, 50));
    rectangle6D.setOutlineColor(sf::Color::Blue);
    rectangle6D.setOutlineThickness(5);
    rectangle6D.setPosition(690, 390);
    // line6G.setPosition(50,410);

    rectangle7D.setSize(sf::Vector2f(100, 50));
    rectangle7D.setOutlineColor(sf::Color::Blue);
    rectangle7D.setOutlineThickness(5);
    rectangle7D.setPosition(690, 470);
    // line7G.setPosition(50,490);

    rectangle8D.setSize(sf::Vector2f(100, 50));
    rectangle8D.setOutlineColor(sf::Color::Blue);
    rectangle8D.setOutlineThickness(5);
    rectangle8D.setPosition(690, 540);
    // line8G.setPosition(50,560);

    rectangle9D.setSize(sf::Vector2f(100, 50));
    rectangle9D.setOutlineColor(sf::Color::Blue);
    rectangle9D.setOutlineThickness(5);
    rectangle9D.setPosition(560, 55);

    rectangle10D.setSize(sf::Vector2f(100, 50));
    rectangle10D.setOutlineColor(sf::Color::Blue);
    rectangle10D.setOutlineThickness(5);
    rectangle10D.setPosition(560, 205);

    rectangle11D.setSize(sf::Vector2f(100, 50));
    rectangle11D.setOutlineColor(sf::Color::Blue);
    rectangle11D.setOutlineThickness(5);
    rectangle11D.setPosition(560, 355);

    rectangle12D.setSize(sf::Vector2f(100, 50));
    rectangle12D.setOutlineColor(sf::Color::Blue);
    rectangle12D.setOutlineThickness(5);
    rectangle12D.setPosition(560, 505);

    rectangle13D.setSize(sf::Vector2f(100, 50));
    rectangle13D.setOutlineColor(sf::Color::Blue);
    rectangle13D.setOutlineThickness(5);
    rectangle13D.setPosition(460, 130);

    rectangle14D.setSize(sf::Vector2f(100, 50));
    rectangle14D.setOutlineColor(sf::Color::Blue);
    rectangle14D.setOutlineThickness(5);
    rectangle14D.setPosition(460, 430);

    rectangle15D.setSize(sf::Vector2f(100, 50));
    rectangle15D.setOutlineColor(sf::Color::Yellow);
    rectangle15D.setOutlineThickness(5);
    rectangle15D.setPosition(420, 280);

    line9G.setPosition(150,30);
    line10G.setPosition(150,180);
    line11G.setPosition(150,330);
    line12G.setPosition(150,480);
    line13G.setPosition(250,27.5);


    if(!texture.loadFromFile("fifa.jpg"))
        return 1;
    
    sf::Sprite sprite(texture);

    window.draw(sprite);
    
    window.draw(rectangleG);
    window.draw(rectangle2G);
    window.draw(rectangle3G);
    window.draw(rectangle4G);
    window.draw(rectangle5G);
    window.draw(rectangle6G);
    window.draw(rectangle7G);
    window.draw(rectangle8G);
    window.draw(rectangle9G);
    window.draw(rectangle10G);
    window.draw(rectangle11G);
    window.draw(rectangle12G);
    window.draw(rectangle13G);
    window.draw(rectangle14G);
    window.draw(rectangle15G);

    window.draw(lineG);
    window.draw(line2G);
    window.draw(line3G);
    window.draw(line4G);
    window.draw(line5G);
    window.draw(line6G);
    window.draw(line7G);
    window.draw(line8G);

    window.draw(line9G);
    window.draw(line10G);
    window.draw(line11G);
    window.draw(line12G);
    window.draw(line13G);

    window.draw(rectangleD);
    window.draw(rectangle2D);
    window.draw(rectangle3D);
    window.draw(rectangle4D);
    window.draw(rectangle5D);
    window.draw(rectangle6D);
    window.draw(rectangle7D);
    window.draw(rectangle8D);
    window.draw(rectangle9D);
    window.draw(rectangle10D);
    window.draw(rectangle11D);
    window.draw(rectangle12D);
    window.draw(rectangle13D);
    window.draw(rectangle14D);
    window.draw(rectangle15D);



    
 


        // fin de la frame courante, affichage de tout ce qu'on a dessiné
        window.display();
    }

    return 0;
}