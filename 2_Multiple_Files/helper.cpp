#include <iostream>
#include "helper.hpp"

namespace sample
{

helper::helper()
{
    std::cout << "Helper created with" << std::endl;
}

helper::~helper()
{
    std::cout << "Helper destructed" << std::endl;
}

} // namespace helper
