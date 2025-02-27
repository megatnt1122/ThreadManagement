#ifndef INVENTORY_MANAGER_HPP
#define INVENTORY_MANAGER_HPP
#pragma once

#include "Assignment.hpp"

namespace my_examples
{

  class InventoryManager
  {
    public:
      bool getTools(bool skill,Assignment assignment) const;
  };
}
#endif
