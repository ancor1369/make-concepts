#include <iostream>
#include "helper.hpp"

namespace sample
{

helper::helper()
{
    std::cout << "Helper created" << std::endl;
}

helper::~helper()
{
    std::cout << "Helper destructor" << std::endl;
}

} // namespace helper
