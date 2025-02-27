#include "public/driver.hpp"
#include "SchedDriver.hpp"
#include "public/ComplianceOfficer.hpp"
#include "public/Manager.hpp"
#include "public/Scheduler.hpp"
#include "public/Assignment.hpp"
#include <iostream>
#include <vector>

namespace my_examples
{
  

  const DRIVER_TYPE SchedDriver::getType() const 
  {
    return DRIVER_TYPE::SCHED_DRIVER;
  }
  
  bool SchedDriver::run() const
  {
    //This is where the main scheduling running will happen
    //Initialize Everything:
    
    //Initialize
    auto CO = ComplianceOfficer();
    //
    auto sched_manager = Manager();
    auto scheduler = Scheduler();
    //This is from external list
    std::vector<Assignment> assignments = sched_manager.getAssignments();
    
    //
    for(Assignment& assignment : assignments)
    {
    //  Verification is for the message mapping within the code
    //  if(co.verify(assignment)):
    //    scheduler.setPriority(assignment)
    //  else:
    //    LogError()
    //
    break;
    
    }
    return true;
  }
}
