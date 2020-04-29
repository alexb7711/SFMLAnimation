/*
 * =====================================================================================
 *
 *       Filename:  ObjectManager.cpp
 *
 *    Description: Interface used by the user to manage objects in the game. 
 *
 *        Version:  1.0
 *        Created:  04/29/2020 11:39:09 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "ObjectManager.hpp"
#include "ResourceHandler/ResourceHandler.hpp"

//===============================================================================
//
template <class Object>
ObjectManager<Object>::ObjectManager()
{}

//===============================================================================
//
template <class Object>
ObjectManager<Object>::ObjectManager(unsigned amount)
{
  spawnObject(amount);
  return;
}

//===============================================================================
//
template <class Object>
void ObjectManager<Object>::spawnObject(unsigned amount)
{
  for(unsigned i = 0; i < amount; ++i)
    m_object.push_back(new Object);

//===============================================================================
//
  return;
}  

//===============================================================================
//
template <class Object>
void ObjectManager<Object>::deleteObject(unsigned amount)
{
  for (unsigned i = 0; i < amount && i < m_object.size(); ++i)
    m_object.erase(m_object.begin() + i);

  return;
}

//===============================================================================
//
template <class Object>
void ObjectManager<Object>::deleteObject(unsigned amount, unsigned index)
{}

//===============================================================================
//
template <class Object>
ObjectManager<Object>::~ObjectManager()
{}
