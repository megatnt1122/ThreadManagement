#ifndef STAFFING_COORDINATOR_HPP
#define STAFFING_COORDINATOR_HPP
#pragma once

#include <vector>
#include "Assignment.hpp"

namespace my_examples
{
  class StaffingCoordinator
  {
    public:
      bool hireWorker(Assignment assignment) const;

      Assignment grabNextAssignment(std::vector<Assignment> internalList) const;
  };
}
#endif
