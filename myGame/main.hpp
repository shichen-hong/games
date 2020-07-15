#ifndef __main
#define __main

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <vector>

void setWindow();
void basicEvent(sf::RenderWindow &window, sf::Event &event);
void changeWindowColor(sf::RenderWindow &window, sf::Color color);

#endif