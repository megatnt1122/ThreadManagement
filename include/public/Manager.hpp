#ifndef MANAGER_HPP
#define MANAGER_HPP
#pragma once

#include <vector>
#include"Assignment.hpp"

namespace my_examples
{

  class Manager
  {
    public:
      //make this return the assignment type
      std::vector<Assignment> getAssignments() const;
  };
}
#endif
