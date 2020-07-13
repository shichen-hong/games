#include <SFML/Window.hpp>
#include <vector>
#include "main.hpp"

int main(int argc, char* argv[])
{
    std::vector<sf::VideoMode> window_modes = sf::VideoMode::getFullscreenModes();
    sf::Uint32 style = sf::Style::Default;
    // sf::Uint32 style = sf::Style::Fullscreen;
    sf::Window window(sf::VideoMode(400, 300), "My Game", style);
    window.setMouseCursorVisible(false);


    while(window.isOpen())
    {
        sf::Event event_1;
        while (window.pollEvent(event_1))
        {
            
        }
    }

    sf::sleep(sf::seconds(5));
    return 0;
}


