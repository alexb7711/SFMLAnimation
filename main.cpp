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
#include "AnimatedSprite.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");

    ResourceHandler* rh = ResourceHandler::getPtr();
    rh->texture.add("SpriteSheet");

    std::vector<sf::IntRect> dragonWalk;
    dragonWalk.push_back(sf::IntRect(0, 0, 192, 192));
    dragonWalk.push_back(sf::IntRect(192, 0, 192, 192));
    dragonWalk.push_back(sf::IntRect(384, 0, 192, 192));
    dragonWalk.push_back(sf::IntRect(192, 0, 192, 192));

//    dragonWalk.push_back(sf::IntRect(576, 0, 192, 192));
//    dragonWalk.push_back(sf::IntRect(384, 0, 192, 192));

//    AnimatedSprite dragon(rh->texture.get("SpriteSheet"));
   AnimatedSprite dragon(rh->texture.get("SpriteSheet"), dragonWalk);

  sf::IntRect rectSourceSprite(0, 0, 192, 192);
  sf::Sprite  sprite(rh->texture.get("SpriteSheet"), rectSourceSprite);

    sf::Clock clock;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

//    if(clock.getElapsedTime().asSeconds() > 1.0f)
//    {
//       if (rectSourceSprite.left == 384)   
//       {
//         rectSourceSprite.left = 0;
//       }
//       else
//         rectSourceSprite.left += 192;
//     
//       clock.restart();
//    }
//
//    sprite.setTextureRect(rectSourceSprite);
       
      if(clock.getElapsedTime().asSeconds() > 0.25f)
      {
         dragon.update();
        clock.restart();
      }

       window.clear();
       dragon.render(&window);
//       window.draw(sprite);
        window.display();

    }

    return 0;
}
