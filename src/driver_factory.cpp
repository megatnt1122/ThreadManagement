#include "public/driver_factory.hpp"
#include "public/driver.hpp"
#include "drivers/SchedDriver.hpp"
#include "drivers/ExecDriver.hpp"
#include <memory>

namespace my_examples 
{
  std::unique_ptr<Driver> DriverFactory::create(const DRIVER_TYPE driver_type) const 
  {
    if(driver_type == DRIVER_TYPE::SCHED_DRIVER)
    {
      return std::make_unique<SchedDriver>();
    }
    
    if(driver_type == DRIVER_TYPE::EXEC_DRIVER)
    {
      return std::make_unique<ExecDriver>();
    }
    return nullptr;
  }
}
