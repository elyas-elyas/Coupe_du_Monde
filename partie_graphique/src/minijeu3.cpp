#include "minijeu3.hpp"

minijeu3::minijeu3(sf::RenderWindow *window)
{
    window->create(sf::VideoMode(800, 600), "Minijeu 3");
    font.loadFromFile("arial.ttf");
    question1.setString("Voulez-vous gagner ce match ?");
    question1.setFont(font);
    question1.setCharacterSize(24);
    question1.setPosition(200, 50);
    question2.setString("Mbappe aurait honte de vous, vous avez perdu pffffff");
    question2.setFont(font);
    question2.setCharacterSize(24);
    question2.setPosition(200, 150);
    question3.setString("Avez-vous deja triche dans notre jeu ?");
    question3.setFont(font);
    question3.setCharacterSize(24);
    question3.setPosition(200, 250);
    answer1.setString("Oui");
    answer1.setFont(font);
    answer1.setCharacterSize(24);
    answer1.setPosition(250, 100);
    answer2.setString("Non");
    answer2.setFont(font);
    answer2.setCharacterSize(24);
    answer2.setPosition(350, 100);
    answer3.setString(" EVIDEMMENT QUE TU N'AS PAS LE CHOIX  \n \n EVIDEMMENT QUE TU TRICHES PAS PAS COMME CES ARGENTINS \n \n BRAVO TU AS GAGNE LE MATCH ");
    answer3.setFont(font);
    answer3.setCharacterSize(24);
    answer3.setPosition(150, 300);
}

void minijeu3::run(sf::RenderWindow *window)
{
    while (window->isOpen())
    {
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    if (answer1.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                    {
                        window->draw(question3);
                        window->draw(answer3);
                        window->display();
                        std::cout << "Vous avez gagne le match !" << std::endl;
                        sf::sleep(sf::seconds(3));
                        window->close();
                    }
                    else if (answer2.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                    {
                        window->draw(question2);
                        window->display();
                        std::cout << "Vous avez perdu le match." << std::endl;
                        sf::sleep(sf::seconds(3));
                    window->close();
                }
            }      
        }
    }
    window->clear();
    window->draw(question1);
    window->draw(answer1);
    window->draw(answer2);
    window->display();
}
}

// int main()
// {
// minijeu3 game;
// game.run();
// return 0;
// }
