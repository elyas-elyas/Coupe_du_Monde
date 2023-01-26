#include <SFML/Graphics.hpp>
#include "screentwo.hpp"

int main()
{
    // Create the main window
    sf::RenderWindow mainWindow(sf::VideoMode(800, 600), "Main Window");
    mainWindow.setKeyRepeatEnabled(false);

    // Create the second window
    sf::RenderWindow secondWindow(sf::VideoMode(400, 300), "Second Window", sf::Style::Default);
    secondWindow.setPosition(sf::Vector2i(800, 0));

    while (mainWindow.isOpen())
    {
        // Handle events in the main window
        sf::Event event;
        while (mainWindow.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                mainWindow.close();
            else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::W)
                secondWindow.create(sf::VideoMode(400, 300), "Second Window", sf::Style::Default);
        }

        // Clear the main window
        mainWindow.clear(sf::Color::White);

        // Draw to the main window
        mainWindowDraw(&mainWindow);

        // Display the main window
        mainWindow.display();

        // Handle events in the second window
        while (secondWindow.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                secondWindow.close();
        }

        // Clear the second window
        secondWindow.clear(sf::Color::White);

        // Draw to the second window
        // ...

        // Display the second window
        secondWindow.display();
    }

    return 0;
}
