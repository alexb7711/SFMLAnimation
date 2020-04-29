#include "ResourceHandler.hpp"

//========//
// PUBLIC //
//========//

//===============================================================================
// Can be implemented in a better way -> See Game Engine Design Notes
ResourceHandler* ResourceHandler::getPtr()
{
  static ResourceHandler handler; 
  return &handler;

}

//=========//
// PRIVATE //
//=========//

//===============================================================================
//
ResourceHandler::ResourceHandler():
  font("font", "otf"),
  texture("texture", "png")
{}
