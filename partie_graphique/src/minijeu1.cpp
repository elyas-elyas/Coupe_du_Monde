#include <SFML/Graphics.hpp>
#include <vector>
#include <random>
#include<iostream>
#include "minijeu1.hpp"


PFCGame::PFCGame(sf::RenderWindow *window) {
    // Initialisation de la fenêtre
    window->create(sf::VideoMode(800, 600), "Pierre-Feuille-Ciseaux");
    // Chargement des images pour les boutons
    rockTexture.loadFromFile("../img/rock.jpeg");
    paperTexture.loadFromFile("../img/paper.jpeg");
    scissorsTexture.loadFromFile("../img/scissors.jpeg");
    // Chargement de l'image de fond
    backgroundTexture.loadFromFile("../img/football_field.png");
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
    question.setString("PIERRE FEUILLE CISEAU appuierez vous sur le bon choix ? ");
    question.setFont(font);
    question.setCharacterSize(24);
    question.setFillColor(sf::Color::White);
    question.setPosition(100, 500);
    if (!font.loadFromFile("arial.ttf")) {
    std::cout << "Error loading font" << std::endl;
    }              
}

void PFCGame::run(sf::RenderWindow *window ,int *result1) {
    while (window->isOpen()) {
        sf::Event event;
        while (window->pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window->close();
            }
            if (event.type == sf::Event::MouseButtonPressed) {
                // Verification de la position de la souris pour savoir quel bouton a ete clique
                sf::Vector2i mousePos = sf::Mouse::getPosition(*window);
                if (rockButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                    play(0,result1);
                } else if (paperButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                    play(1,result1);
                } else if (scissorsButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                    play(2,result1);
                }
                
                
            }
        }
        window->clear();
        // Dessin de l'image de fond
        window->draw(background);
        // Dessin des boutons sur la fenêtre
        window->draw(rockButton);
        window->draw(paperButton);
        window->draw(scissorsButton);
        // Affichage des textes pour la question, le resultat et le choix de l'utilisateur
        window->draw(question);
        window->draw(resultText);
        window->draw(choiceText);
        window->display();
        if (*result1 == 2)
        {
            sf::sleep(sf::seconds(1.5));
            window->close();
        }
    }
}



void PFCGame::play(int choice ,int *result1) {
    // Generation d'un choix aleatoire pour l'ordinateur
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, 2);
    int computerChoice = dist(mt);
    // Utilisation d'une surcharge d'operateur pour determiner le resultat
    std::string result = "";
    if (choice == computerChoice) {
        result = "Egalite!";
        *result1=1;
    } else if (choice == 0 && computerChoice == 2) {
        result = "Gagne!";
        *result1=2;
    } else if (choice == 1 && computerChoice == 0) {
        result = "Gagne!";
        *result1=2;
    } else if (choice == 2 && computerChoice == 1) {
        result = "Gagne!";
        *result1=2;
    } else {
        result = "Perdu!";
        *result1=0;
    }
         // Mise à jour des textes pour afficher le resultat et le choix de l'utilisateur
        resultText.setString("Resultat : " + result);
        resultText.setFont(font);

        if(choice==0){
            if(computerChoice==0){
                choiceText.setString("Vous avez choisi pierre et l'ordinateur a choisi pierre" );
                choiceText.setFont(font);

            }
            else if(computerChoice==1){
                choiceText.setString("Vous avez choisi pierre et l'ordinateur a choisi papier" );
                choiceText.setFont(font);

            }
            else if(computerChoice==2){
                choiceText.setString("Vous avez choisi pierre et l'ordinateur a choisi ciseau" );
                choiceText.setFont(font);
            }
        }
        if(choice==1){
            if(computerChoice==0){
                choiceText.setString("Vous avez choisi papier et l'ordinateur a choisi pierre" );
                choiceText.setFont(font);

            }
            else if(computerChoice==1){
                choiceText.setString("Vous avez choisi papier et l'ordinateur a choisi papier" );
                choiceText.setFont(font);

            }
            else if(computerChoice==2){
                choiceText.setString("Vous avez choisi papier et l'ordinateur a choisi ciseau" );
                choiceText.setFont(font);
            }
        }
        else if(choice==2){
            if(computerChoice==0){
                choiceText.setString("Vous avez choisi ciseau et l'ordinateur a choisi pierre" );
                choiceText.setFont(font);

            }
            else if(computerChoice==1){
                choiceText.setString("Vous avez choisi ciseau et l'ordinateur a choisi papier" );
                choiceText.setFont(font);

            }
            else if(computerChoice==2){
                choiceText.setString("Vous avez choisi ciseau et l'ordinateur a choisi ciseau" );
                choiceText.setFont(font);
            }
        }

}


/*
int main() {
    PFCGame game;
    game.run();
    return 0;
}
*/