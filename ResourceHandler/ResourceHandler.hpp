// File: ResourceHandler.hpp
// Author: Alexander Brown
// Version: 0.1
// Changelog: 
// Description: The interface for the programmer to utilize resources.

#ifndef _RESOURCE_HANDLER_HPP_ 
#define _RESOURCE_HANDLER_HPP_ 

// C/C++ Standard Library
#include <map>
#include <string>

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


// Custom Header Files
#include "ResourceContainer.hpp"

class ResourceHandler
{
  public:
    // Public Methods
    static ResourceHandler* getPtr();

    ResourceContainer<sf::Font>        font;
    ResourceContainer<sf::Music>       music;
    ResourceContainer<sf::SoundBuffer> soundBuffer;
    ResourceContainer<sf::Texture>     texture;

  private:
    // Private Methods
    ResourceHandler();
};

#endif
