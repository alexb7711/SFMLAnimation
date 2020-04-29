/*
 * =====================================================================================
 *
 *       Filename:  ObjectManager.hpp
 *
 *    Description: Interface used by the user to manage objects in the game. 
 *
 *        Version:  1.0
 *        Created:  04/29/2020 11:39:55 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <vector>

#ifndef _OBJECT_MANAGER_H_
#define _OBJECT_MANAGER_H_

template <class Object>
class ObjectManager
{
  public:
    // Public Methods
    ObjectManager();
    ObjectManager(unsigned amount);

    void spawnObject(unsigned amount);
    void deleteObject(unsigned amount);
    void deleteObject(unsigned amount, unsigned index);

    ~ObjectManager();
    
  private:
    // Private Member Variables
    std::vector<Object> m_object;
};

#endif
