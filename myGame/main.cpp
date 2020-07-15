#include "main.hpp"


int main(int argc, char* argv[])
{
    std::vector<sf::VideoMode> window_modes = sf::VideoMode::getFullscreenModes();
    
    sf::Uint32 style = sf::Style::Default;
    // sf::Uint32 style = sf::Style::Fullscreen;
    sf::RenderWindow window(sf::VideoMode(400, 300), "My Game", style);
    changeWindowColor(window, sf::Color::Black);
    
    while(window.isOpen())
    {
        sf::Event event_1;
        basicEvent(window, event_1);
    }
    sf::sleep(sf::seconds(5));
    return 0;
}

void basicEvent(sf::RenderWindow& window, sf::Event& event)
{
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::EventType::Closed:
                window.close();
                break;
            case sf::Event::EventType::KeyReleased:
                if (event.key.code == sf::Keyboard::Space)
                {
                    window.setMouseCursorVisible(true);
                    changeWindowColor(window, sf::Color::Blue);
                }
                else if (event.key.code == sf::Keyboard::BackSpace)
                {
                    window.setMouseCursorVisible(false);
                    changeWindowColor(window, sf::Color::Black);
                }
                break;
            case sf::Event::LostFocus:
                window.setTitle("Lost Focus");
                break;
            case sf::Event::GainedFocus:
                window.setTitle("My Game");
                break;
            default:
                break;
            }
        }
}

void changeWindowColor(sf::RenderWindow& window, sf::Color color)
{
    window.clear(color);
    window.display();
}