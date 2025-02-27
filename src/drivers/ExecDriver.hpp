#ifndef EXECDRIVER_HPP
#define EXECDRIVER_HPP
#pragma once


#include "public/driver.hpp"

namespace my_examples
{
  class ExecDriver : public Driver
  {
    public:
      const DRIVER_TYPE getType() const override;
      bool run() const override;
  };
}

#endif // SCHEDDRIV
