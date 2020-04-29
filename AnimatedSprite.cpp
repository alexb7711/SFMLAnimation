/*
 * =====================================================================================
 *
 *       Filename:  AnimatedSprite.cpp
 *
 *    Description:  A generalized animated sprite class for SFML.  
 *
 *        Version:  1.0
 *        Created:  04/28/2020 02:02:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <iostream>
#include "AnimatedSprite.hpp"

//===============================================================================
//
AnimatedSprite::AnimatedSprite(const sf::Texture& texture):
  m_sprite(texture)
{
//  changeTexture(texture);
  return;
}

//===============================================================================
//
AnimatedSprite::AnimatedSprite(const sf::Texture& texture, std::vector<sf::IntRect> frames):
  m_sprite(texture)
{
//  changeTexture(texture);
  changeFrameVector(frames);
  return;
}

//===============================================================================
//
void AnimatedSprite::changeTexture(sf::Texture texture)
{  
  m_sprite.setTexture(texture, true);
  return;
}
    
//===============================================================================
//
void AnimatedSprite::addFrame(sf::IntRect frame)
{
  m_frame.push_back(frame);
  return;
}

//===============================================================================
//
void AnimatedSprite::changeFrameVector(std::vector<sf::IntRect> frames)
{
  m_frame = frames;
  return;
}

//===============================================================================
//
void AnimatedSprite::update()
{
  if (m_frame.size() > 0)
  {
    if (m_current_frame++ >= m_frame.size()-1)   
      m_current_frame = 0;
  
   std::cout << m_current_frame << std::endl;
//   std::cout << m_frame.size() << std::endl;
    
    m_sprite.setTextureRect(m_frame[m_current_frame]);
  }

  return;
}

//===============================================================================
//
void AnimatedSprite::render(sf::RenderTarget* renderer)
{
  renderer->draw(m_sprite);
  return;
}

//===============================================================================
//
AnimatedSprite::~AnimatedSprite()
{}
