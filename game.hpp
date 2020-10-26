#pragma once

#include <memory>
#include <vector>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "background.hpp"
#include "ball.hpp"
#include "entity.hpp"
#include "gameStates.hpp"
#include "headers.hpp"
#include "leftPaddle.hpp"
#include "rightPaddle.hpp"

class Game : public State {
public:
    void initialize(sf::RenderWindow* window);
    void update(sf::RenderWindow* window);
    void render(sf::RenderWindow* window);
    void destroy(sf::RenderWindow* window);

private:
    std::shared_ptr<Background> background_;
    std::shared_ptr<Ball> ball_;
    std::shared_ptr<LeftPaddle> leftPaddle_;
    std::shared_ptr<RightPaddle> rightPaddle_;
    std::shared_ptr<Paddle> paddle_;
    std::shared_ptr<Score> scorePlayer1_;
    std::shared_ptr<Score> scorePlayer2_;

    sf::Font* scoreFont_;
    sf::Text* pausedText_;
    sf::Font* pausedFont_;
    bool paused_, enterKey_;

    sf::Text* startDigits_;

    sf::Clock startTimer_;
    sf::Time startElapsed_;
};