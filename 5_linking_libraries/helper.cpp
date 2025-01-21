#include <iostream>
#include "helper.hpp"
#include <math.h>
#include <ncurses.h>

namespace sample
{

helper::helper()
{
    std::cout << "Helper created" << std::endl;
    printw("Calling functions from ncurses");
    refresh();
}

helper::~helper()
{
    std::cout << "Helper destructor" << std::endl;
}

float helper::calculate_log10(float number)
{
    std::cout << "Calculating log10 function of " << number << std::endl;
    return log10(number);
}

} // namespace helper
