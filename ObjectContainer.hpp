/*
 * =====================================================================================
 *
 *       Filename:  ObjectContainer.hpp
 *
 *    Description:  Maintains the "things" loaded in the games. Such as animated
 *                  sprites, items, rooms, etc.
 *
 *        Version:  1.0
 *        Created:  04/29/2020 11:32:38 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _OBJECT_CONTAINER_H_
#define _OBJECT_CONTAINER_H_

#include <string>

template <class Object>
class ObjectContainer
{
  public:

    /* 
     * ===  FUNCTION  ======================================================================
     *         Name:  ObjectContainer
     *  Description: Constructor 
     * =====================================================================================
     */
    ObjectContainer(const std::string& name, Object resource)
    {}


    /* 
     * ===  FUNCTION  ======================================================================
     *         Name:  ObjectContainer::exists
     *  Description: Returns true if the item exsists
     * =====================================================================================
     */
    bool exists (const std::string& name)
    {}


    /* 
     * ===  FUNCTION  ======================================================================
     *         Name:  ObjectContainer::add
     *  Description: Create a new instance 
     * =====================================================================================
     */
    void add(const std::string& name)
    {}

    void 
  private:
};

#endif
