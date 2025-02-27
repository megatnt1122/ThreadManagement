#ifndef SCHEDDRIVER_HPP
#define SCHEDDRIVER_HPP
#pragma once


#include "public/driver.hpp"

namespace my_examples
{
  class SchedDriver : public Driver
  {
    public:
      const DRIVER_TYPE getType() const override;
      bool run() const override; 
  };
}

#endif // SCHEDDRIVER_HPP
