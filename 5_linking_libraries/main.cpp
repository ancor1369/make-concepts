#include <iostream>
#include "helper.hpp"

int main()
{
    sample::helper hlp_instance;
    std::cout << "This is the fifth exercise" << std::endl;
    float result = hlp_instance.calculate_log10(45);
    std::cout << "Result of operation: " << result << std::endl;
    return 0;
}