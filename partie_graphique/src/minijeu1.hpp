#include <SFML/Graphics.hpp>


class PFCGame {
public:
    PFCGame(sf::RenderWindow *window); 
    void run(sf::RenderWindow *window);

private:
    sf::RenderWindow window;
    sf::Texture rockTexture, paperTexture, scissorsTexture, backgroundTexture;
    sf::Sprite rockButton, paperButton, scissorsButton, background;
    std::vector<std::string> results;
    sf::Font font;
    sf::Text question, resultText, choiceText;

    void play(int choice);
};

