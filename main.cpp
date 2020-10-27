#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include "gameStates.hpp"
#include "headers.hpp"
#include "mainMenu.hpp"

bool quitGame = false;

int main() {
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "PingPong");
    GameState& game = GameState::instance();
    game.setWindow(&window);
    std::shared_ptr<MainMenu> mainMenu(new MainMenu());
    game.setState(mainMenu);

    sf::Clock timer;
    sf::Time elapsed;

    sf::SoundBuffer musicBuffer;
    musicBuffer.loadFromFile("../assets/sounds/fantasy-forest.wav");
    sf::Sound music(musicBuffer);
    music.setLoop(true);
    music.play();
    music.setVolume(25);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        elapsed = timer.getElapsedTime();
        if (elapsed.asMicroseconds() > 16666) {
            game.update();
            game.render();
            window.display();
            if (quitGame) {
                window.close();
            }
            timer.restart();
        }
    }
    music.stop();

    return 0;
}
