#pragma once
#include "SFML/Graphics.hpp"
#include "game.hpp"
#include "gameStates.hpp"
#include "headers.hpp"

class MainMenu : public State {
public:
    void initialize(sf::RenderWindow* window);
    void update(sf::RenderWindow* window);
    void render(sf::RenderWindow* window);
    void destroy(sf::RenderWindow* window);

    //void drawMenu(sf::RenderWindow& window);
    void moveUp();
    void moveDown();
    int getCurrentIndex();

private:
    int selected_;
    bool upKey, downKey;
    sf::Font* font_;

    sf::Text* title_;

    sf::Text* play_;
    sf::Text* quit_;
    std::shared_ptr<Background> background_;

};
