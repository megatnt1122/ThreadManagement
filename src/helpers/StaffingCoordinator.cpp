#include "public/StaffingCoordinator.hpp"
#include "public/Assignment.hpp"
#include <iostream>

#include <vector>

namespace my_examples
{  
  bool StaffingCoordinator::hireWorker(Assignment assignment) const
  {
    //CHANGE BACK TO ASSIGNMENT ONCE WE GET THINGS SORTED
    if(true)
    {
      return true;
    }
    else 
    {
      return false; 
    }
  }

  
  Assignment StaffingCoordinator::grabNextAssignment(std::vector<Assignment> internalList) const 
  {
    Assignment assignment;
    return assignment;
  }
}

