#include <SFML/Graphics.hpp>
#include <vector>
#include <random>
#include<iostream>

class PFCGame {
public:
    PFCGame() {
        // Initialisation de la fenêtre
        window.create(sf::VideoMode(800, 600), "Pierre-Feuille-Ciseaux");
        // Chargement des images pour les boutons
        rockTexture.loadFromFile("rock.png");
        paperTexture.loadFromFile("paper.png");
        scissorsTexture.loadFromFile("scissors.png");
        // Chargement de l'image de fond
        backgroundTexture.loadFromFile("football_field.png");
        background.setTexture(backgroundTexture);
        // Initialisation des boutons
        rockButton.setTexture(rockTexture);
        paperButton.setTexture(paperTexture);
        scissorsButton.setTexture(scissorsTexture);
        // Positionnement des boutons
        rockButton.setPosition(200, 300);
        paperButton.setPosition(400, 300);
        scissorsButton.setPosition(600, 300);
        // Initialisation des resultats possibles
        results.push_back("Gagne!");
        results.push_back("Perdu!");
        results.push_back("Egalite!");
        // Initialisation des textes pour afficher le resultat
        resultText.setFont(font);
        resultText.setCharacterSize(24);
        resultText.setFillColor(sf::Color::White);
        resultText.setPosition(50, 50);
        choiceText.setFont(font);
        choiceText.setCharacterSize(24);
        choiceText.setFillColor(sf::Color::White);
        choiceText.setPosition(50, 70);
        if (!font.loadFromFile("arial.ttf")) {
        std::cout << "Error loading font" << std::endl;
        }              
    }

    void run() {
        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
                if (event.type == sf::Event::MouseButtonPressed) {
                    // Verification de la position de la souris pour savoir quel bouton a ete clique
                    sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                    if (rockButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                        play(0);
                    } else if (paperButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                        play(1);
                    } else if (scissorsButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                        play(2);
                    }
                }
            }
            window.clear();
            // Dessin de l'image de fond
            window.draw(background);
            // Dessin des boutons sur la fenêtre
            window.draw(rockButton);
            window.draw(paperButton);
            window.draw(scissorsButton);
            // Affichage des textes pour le resultat et le choix de l'utilisateur
            window.draw(resultText);
            window.draw(choiceText);
            window.display();
        }
    }

private:
    sf::RenderWindow window;
    sf::Texture rockTexture, paperTexture, scissorsTexture, backgroundTexture;
    sf::Sprite rockButton, paperButton, scissorsButton, background;
    std::vector<std::string> results;
    sf::Font font;
    sf::Text resultText, choiceText;

    void play(int choice) {
        // Generation d'un choix aleatoire pour l'ordinateur
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<int> dist(0, 2);
        int computerChoice = dist(mt);
        // Utilisation d'une surcharge d'operateur pour determiner le resultat
        std::string result = "";
        if (choice == computerChoice) {
            result = "Egalite!";
        } else if (choice == 0 && computerChoice == 2) {
            result = "Gagne!";
        } else if (choice == 1 && computerChoice == 0) {
            result = "Gagne!";
        } else if (choice == 2 && computerChoice == 1) {
            result = "Gagne!";
        } else {
            result = "Perdu!";
        }
        // Mise à jour des textes pour afficher le resultat et le choix de l'utilisateur
        resultText.setString("Resultat : " + result);
        choiceText.setString("Vous avez choisi " + std::to_string(choice) + " et l'ordinateur a choisi " + std::to_string(computerChoice));
        resultText.setFont(font);
        choiceText.setFont(font);

    }
};

int main() {
    PFCGame game;
    game.run();
    return 0;
}
