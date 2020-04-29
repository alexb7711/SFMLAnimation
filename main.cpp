/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  main() 
 *
 *        Version:  1.0
 *        Created:  04/28/2020 01:02:49 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <SFML/Graphics.hpp>

#include "ResourceHandler/ResourceHandler.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");

    sf::Texture texture;
    texture.loadFromFile("SpriteSheet.png");

    sf::IntRect rectSourceSprite(0, 0, 192, 192);
    sf::Sprite  sprite(texture, rectSourceSprite);

    sf::Clock clock;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if(clock.getElapsedTime().asSeconds() > 1.0f)
        {
          if (rectSourceSprite.left == 384)   
          {
            rectSourceSprite.left = 0;
          }
          else
            rectSourceSprite.left += 192;
        
          clock.restart();
        }

        sprite.setTextureRect(rectSourceSprite);

        window.clear();
        window.draw(sprite);
        window.display();

    }

    return 0;
}
