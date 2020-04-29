// File: ResourceContainer.hpp
// Author: Alexander Brown
// Version: 0.1
// Changelog: 
// Description: Stores resources such as sound, texture, and fonts.

#ifndef _RESOURCE_CONTAINER_HPP_ 
#define _RESOURCE_CONTAINER_HPP_ 

// C/C++ Standard Library
#include <map>
#include <string>

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files

template<class Resource>
class ResourceContainer
{
  public:
    // Public Methods

    //===========================================================================
    // 
    ResourceContainer()
    {}
    
    //===========================================================================
    // For the use of loading and storing resources for a state
    ResourceContainer(const std::string folder, const std::string extension):
      m_folder(folder+"/"),
      m_extension("."+extension)
    {}

    //===========================================================================
    //
    const Resource& get(const std::string& name)
    {
      if (!this->exists(name))
      {
        this->add(name);
      }

        return m_resource[name];
    }

    //===========================================================================
    //
    bool exists (const std::string& name)
    {
      return m_resource.find(name) != m_resource.end();
    }

    //===========================================================================
    //
    void add(const std::string& name)
    {
      Resource resource;

      if ( !resource.loadFromFile( getFullName(name) ) )
      {
        // TODO: Load default resource
      }
      else
      {
        m_resource[name] = resource;
      }

      return;
    }

    //===========================================================================
    //
    void remove (const std::string& name)
    {
      if (this->exists(name))
        m_resource.erase(name);

      return;
    }

    //===========================================================================
    //
    ~ResourceContainer()
    {}

  private:
    // Private Methods
    
    //===========================================================================
    //
    std::string getFullName(const std::string& name)
    {
      return m_folder + name + m_extension;
    }

    // Private Member Variables
    std::map<std::string, Resource> m_resource;
    const std::string m_folder;
    const std::string m_extension;
};

#endif
