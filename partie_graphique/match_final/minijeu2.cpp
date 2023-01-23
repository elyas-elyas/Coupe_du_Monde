#include <SFML/Graphics.hpp>
#include <vector>
#include <random>
#include<iostream>

enum CoinFlipSide {
Heads,
Tails
};

class CoinFlipGame {
 public:
  CoinFlipGame() {
    // Initialisation de la fenêtre
    window_.create(sf::VideoMode(300, 300), "Coin Flip Game");

    // Initialisation des textures pour les côtes de la pièce et le fond
    heads_texture_.loadFromFile("heads.png");
    tails_texture_.loadFromFile("tails.png");
    background_texture_.loadFromFile("football_field.png");

    // Initialisation des sprites pour les côtes de la pièce et le fond
    heads_sprite_.setTexture(heads_texture_);
    tails_sprite_.setTexture(tails_texture_);
    background_sprite_.setTexture(background_texture_);

    // Positionne la pièce au milieu de l'ecran
    heads_sprite_.setPosition((window_.getSize().x - heads_texture_.getSize().x) / 2, (window_.getSize().y - heads_texture_.getSize().y) / 2);
    tails_sprite_.setPosition((window_.getSize().x - tails_texture_.getSize().x) / 2, (window_.getSize().y - tails_texture_.getSize().y) / 2);

    // Initialisation du texte pour afficher le resultat
    result_text_.setFont(font);
    result_text_.setCharacterSize(24);
    result_text_.setFillColor(sf::Color::White);
    result_text_.setOutlineColor(sf::Color::Black);
    result_text_.setOutlineThickness(1.0f);
    if (!font.loadFromFile("arial.ttf")) {
        std::cout << "Error loading font" << std::endl;
        }  
    
  }

  void Run() {
    while (window_.isOpen()) {
      sf::Event event;
      while (window_.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
          window_.close();
        }

        // Gestion des entrees de l'utilisateur
        if (event.type == sf::Event::KeyPressed) {
          if (event.key.code == sf::Keyboard::H) {
            player_choice_ = Heads;
            Flip();
          } else if (event.key.code == sf::Keyboard::T) {
            player_choice_ = Tails;
            Flip();
          }
        }
      }

      // Dessin du fond
      window_.draw(background_sprite_);

      // Dessin du côte de la pièce actuellement affiche
      if (current_side_ == Heads) {
        window_.draw(heads_sprite_);
      } else {
        window_.draw(tails_sprite_);
      }

      // Affiche le resultat du jeu
      if (player_choice_ == current_side_) {
        result_text_.setString("Vous avez gagne!");
      } else {
        result_text_.setString("Vous avez perdu.");
}
result_text_.setPosition((window_.getSize().x - result_text_.getLocalBounds().width) / 2, 10);
result_text_.setFont(font);
        
window_.draw(result_text_);

  window_.display();
}

}
// Fonction virtuelle pour lancer la pièce
virtual void Flip() {
std::random_device rd;
std::mt19937 eng(rd());
std::uniform_int_distribution<> distr(0, 1);

current_side_ = distr(eng) == 0 ? Heads : Tails;

}

// Surcharge de l'operateur == pour verifier si le côte de la pièce actuel est egal à la selection du joueur
bool operator==(const CoinFlipSide& side) {
return current_side_ == side;
}

private:
sf::RenderWindow window_;
sf::Texture heads_texture_;
sf::Texture tails_texture_;
sf::Texture background_texture_;
sf::Sprite heads_sprite_;
sf::Sprite tails_sprite_;
sf::Sprite background_sprite_;
sf::Font font;
sf::Text result_text_;

CoinFlipSide player_choice_;
CoinFlipSide current_side_;
};


       




int main() {
CoinFlipGame game;
game.Run();

return 0;
}
