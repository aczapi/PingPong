#include "game.hpp"
#include "mainMenu.hpp"

void Game::initialize(sf::RenderWindow* window) {
    this->background_ = std::make_shared<Background>("../assets/graphics/background_game.jpg");
    this->background_->setScale(0.34, 0.34);

    this->leftPaddle_ = std::make_shared<LeftPaddle>();
    this->rightPaddle_ = std::make_shared<RightPaddle>();

    this->leftPaddle_->setPosition(10, windowHeight / 2 - this->leftPaddle_->getGlobalBounds().height / 2);
    this->leftPaddle_->setScale(2, 2);
    this->rightPaddle_->setPosition(window->getSize().x - this->rightPaddle_->getGlobalBounds().width * 2 - 10,
                                    windowHeight / 2 - this->rightPaddle_->getGlobalBounds().height / 2);
    this->rightPaddle_->setScale(2, 2);

    this->pausedFont_ = new sf::Font();
    this->pausedFont_->loadFromFile("../assets/fonts/SpaceSuperstars.ttf");

    this->pausedText_ = new sf::Text("                 Game paused\nPress Escape to Quit", *pausedFont_, 45U);
    this->pausedText_->setFillColor(sf::Color(218, 165, 32));
    this->pausedText_->setOrigin(this->pausedText_->getGlobalBounds().width / 2, this->pausedText_->getGlobalBounds().height / 2);
    this->pausedText_->setPosition(window->getSize().x / 2, window->getSize().y / 2);

    this->scoreFont_ = new sf::Font();
    this->scoreFont_->loadFromFile("../assets/fonts/SpaceSuperstars.ttf");

    this->scorePlayer1_ = std::make_shared<Score>(*scoreFont_, 40U);
    this->scorePlayer1_->setFillColor(sf::Color(139, 0, 0));
    this->scorePlayer1_->setPosition(20, 20);
    this->scorePlayer2_ = std::make_shared<Score>(*scoreFont_, 40U);
    this->scorePlayer2_->setFillColor(sf::Color(139, 0, 0));
    this->scorePlayer2_->setPosition(windowWidth - 270, 20);

    this->startDigits_ = new sf::Text("Ready?", *scoreFont_, 64U);
    this->startDigits_->setFillColor(sf::Color(218, 165, 32));
    this->control_ = new sf::Text("     Player on the left use W and S to move\n\n\n\n   Player on the right use Up and Down arrows.", *pausedFont_, 32U);
    this->control_->setFillColor(sf::Color(218, 165, 32));
    this->control_->setOrigin(this->control_->getGlobalBounds().width / 2, this->control_->getGlobalBounds().height / 2);
    this->control_->setPosition(600, 350);

    this->ball_ = std::make_shared<Ball>(this->leftPaddle_, this->rightPaddle_, this->scorePlayer1_, this->scorePlayer2_);
    this->ball_->reset(window);

    this->paused_ = false;
    this->enterKey_ = false;
}

void Game::update(sf::RenderWindow* window) {
    if (this->startElapsed_.asMilliseconds() > 6400) {
        if (this->paused_) {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Return) && !this->enterKey_) {
                this->paused_ = false;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) {
                GameState& gameState = GameState::instance();
                std::shared_ptr<MainMenu> menu(new MainMenu());
                gameState.setState(menu);
            }
        } else {
            this->ball_->update(window);
            this->leftPaddle_->update();
            this->rightPaddle_->update();
            this->scorePlayer1_->update();
            this->scorePlayer2_->update();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Return) && !this->enterKey_) {
                this->paused_ = true;
                this->pausedText_->setString("                     Game paused\n    Press Escape to Quit");
                this->pausedText_->setOrigin(this->pausedText_->getGlobalBounds().width / 2, this->pausedText_->getGlobalBounds().height / 2);
                this->pausedText_->setPosition(600, 400);
            }
        }
        this->enterKey_ = sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Return);
    } else {
        if ((int)this->startElapsed_.asSeconds() == 6) {
            this->startDigits_->setString("Go!");
            this->startDigits_->setFillColor(sf::Color(218, 165, 32));
        }
        this->startDigits_->setOrigin(this->startDigits_->getGlobalBounds().width / 2, this->startDigits_->getGlobalBounds().height / 2);
        this->startDigits_->setPosition(650, 350);
    }
    this->enterKey_ = sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Return);
}

void Game::render(sf::RenderWindow* window) {
    window->draw(*this->background_);
    window->draw(*this->leftPaddle_);
    window->draw(*this->rightPaddle_);
    window->draw(*this->scorePlayer1_);
    window->draw(*this->scorePlayer2_);
    window->draw(*this->ball_);
    this->startElapsed_ = this->startTimer_.getElapsedTime();
    if (this->startElapsed_.asMilliseconds() < 5000) {
        window->draw(*this->control_);
    }
    if (this->startElapsed_.asMilliseconds() >= 5000 && this->startElapsed_.asMilliseconds() < 6400) {
        window->draw(*this->startDigits_);
    }
    if (this->paused_) {
        window->draw(*this->pausedText_);
    }
}

void Game::destroy(sf::RenderWindow* window) {
    delete this->pausedFont_;
    delete this->scoreFont_;
    delete this->pausedText_;
    delete this->startDigits_;
    delete this->control_;
}