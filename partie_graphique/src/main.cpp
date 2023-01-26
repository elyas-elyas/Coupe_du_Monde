#include <SFML/Graphics.hpp>
#include "main.hpp"
#include "minijeu1.hpp"

int main()
{   
    const int GAME_SIZE=8;
    Team t1("FRA",100);
    Team t2("BRA",110);
    Team t3("USA",80);
    Team t4("MAR",90);
    Team t5("TUN",75);
    Team t6("ARG",120);
    Team t7("BLG",70);
    Team t8("GER",75);
    vector<Team> teams{t1,t2,t3,t4,t5,t6,t7,t8};

    Game mainGame( teams );

    mainGame.setSize(GAME_SIZE);
    cout <<"teams is of size = " <<teams.size()<< endl;

    cout<< "Starting Game ... " <<endl;

    vector<Team> visibleTeams=teams;

    
    // Create the main window
    sf::RenderWindow mainWindow(sf::VideoMode(800, 600), "Main Window");
    mainWindow.setKeyRepeatEnabled(false);

    // Create the second window
    sf::RenderWindow secondWindow(sf::VideoMode(800, 600), "Second Window", sf::Style::Default);
    secondWindow.setPosition(sf::Vector2i(800, 10));

    PFCGame pfcgame(&secondWindow);

    while (mainWindow.isOpen())
    {
        // Handle events in the main window
        sf::Event event;
        while (mainWindow.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                mainWindow.close();
            else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::W)
                PFCGame pfcgame(&secondWindow);

        }

        // Clear the main window
        mainWindow.clear(sf::Color::White);

        // Draw to the main window
        visibleTeams.insert(visibleTeams.end() , mainGame.getWinners().begin(),mainGame.getWinners().end());
        mainWindowDraw(&mainWindow, visibleTeams);
        //vector1.insert( vector1.end(), vector2.begin(), vector2.end() );

        // Display the main window
        mainWindow.display();

        // Handle events in the second window
        while (secondWindow.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                secondWindow.close();
        }

        // Clear the second window
        //secondWindow.clear(sf::Color::White);

        // Draw to the second window
        pfcgame.run(&secondWindow);

        // Display the second window
        //secondWindow.display();
    }

    return 0;
}
