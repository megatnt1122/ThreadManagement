#include "public/ComplianceOfficer.hpp"
#include <iostream>

namespace my_examples
{  
  bool ComplianceOfficer::verifyTask(bool assignment) const
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
