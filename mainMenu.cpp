#include "mainMenu.hpp"

void MainMenu::initialize(sf::RenderWindow* window) {
    this->background_ = std::make_shared<Background>("../assets/graphics/backgstar.png");

    this->background_->setScale(0.7, 0.6);
    this->font_ = new sf::Font();
    this->font_->loadFromFile("../assets/fonts/OuterspaceMilitia.ttf");

    this->title_ = new sf::Text(("PING PONG"), *this->font_, 100U);
    this->title_->setOrigin(this->title_->getGlobalBounds().width / 2, this->title_->getGlobalBounds().height / 2);
    this->title_->setPosition(window->getSize().x / 2, window->getSize().y / 6);

    this->play_ = new sf::Text(("PLAY"), *this->font_, 60U);
    this->play_->setOrigin(this->play_->getGlobalBounds().width / 2, this->play_->getGlobalBounds().height / 2);
    this->play_->setPosition(window->getSize().x / 2, window->getSize().y / 2 + window->getSize().y / 7);

    this->quit_ = new sf::Text(("QUIT"), *this->font_, 60U);
    this->quit_->setOrigin(this->quit_->getGlobalBounds().width / 2, this->quit_->getGlobalBounds().height / 2);
    this->quit_->setPosition(window->getSize().x / 2, window->getSize().y / 2 + +window->getSize().y / 7 +
                                                          2 * this->play_->getGlobalBounds().height + 45);

    this->selected_ = 0;
}

void MainMenu::update(sf::RenderWindow* window) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up) && !this->upKey) {
        this->selected_ -= 1;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down) && !this->downKey) {
        this->selected_ += 1;
    }
    if (this->selected_ > 2) {
        this->selected_ = 0;
    }
    if (this->selected_ < 0) {
        this->selected_ = 2;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Return)) {
        GameState& game = GameState::instance();
        switch (this->selected_) {
        case 0: {
            std::shared_ptr<Game> newGame(new Game());
            game.setState(newGame);
            break;
        }

        case 1: {
            quitGame = true;
            break;
        }
        default:

            break;
        }
    }
    this->upKey = sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up);
    this->downKey = sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down);
}

void MainMenu::render(sf::RenderWindow* window) {
    window->draw(*this->background_);

    this->play_->setFillColor(sf::Color::White);
    this->quit_->setFillColor(sf::Color::White);
    switch (this->selected_) {
    case 0:
        this->play_->setFillColor(sf::Color(246, 55, 202));
        break;
    case 1:
        this->quit_->setFillColor(sf::Color(246, 55, 202));
        break;
    default:
        break;
    }

    window->draw(*this->title_);
    window->draw(*this->play_);
    window->draw(*this->quit_);
}

void MainMenu::destroy(sf::RenderWindow* window) {
    delete this->font_;
    delete this->title_;
    delete this->play_;
    delete this->quit_;
}