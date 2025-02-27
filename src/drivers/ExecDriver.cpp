#include "public/driver.hpp"
#include "ExecDriver.hpp"
#include "public/StaffingCoordinator.hpp"
#include "public/InventoryManager.hpp"
#include "public/Manager.hpp"
#include "public/Worker.hpp"
#include <iostream>

namespace my_examples
{

  const DRIVER_TYPE ExecDriver::getType() const 
  {
    return DRIVER_TYPE::EXEC_DRIVER;
  }

  bool ExecDriver::run() const
  {
    
    StaffingCoordinator sc;
    InventoryManager im;
    Manager exec_manager;

    std::vector<Assignment> internalList;

    //Change this to check if theres another task avaliable
    while(true)
    {
      //NOTE
      auto assignment = sc.grabNextAssignment(internalList);

      //If assignment is to exit job site then exit loop
      //if(assignment == exit)
      if(true)
      {
        break;
      }
      
      //Hiring worker based off assignment | Maybe give the assignment to the worker - perhaps worker has a skill attached for below
      //worker = sc.hireWorker(assignment)
      //
      //Get appropriate tools | assignment and worker would be used to dictate appropriate tools
      //tools = im.getTools(worker.skill, assignment)
      //
      //Worker uses tools to do work 
      //assignment = worker.execute(assignment, tools) //this execute would have a while within
      //
      //manager.updateAssignment(assignment)
      //
      //sc.reassignWorker(worker)
      //
      return true;
    }  
  }
}
