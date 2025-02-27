#include "public/Scheduler.hpp"
#include <iostream>

namespace my_examples
{  
  bool Scheduler::setPriority(bool assignment) const
  {
    if(assignment)
    {
      return true;
    }
    else 
    {
      return false; 
    }
  }
}
