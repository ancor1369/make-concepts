#include <iostream>
#include "helper.hpp"

int main()
{
    sample::helper hlp_instance;
    std::cout << "This is the fifth exercise" << std::endl;
    std::string result = hlp_instance.load_json_object();
    std::cout << "Result of operation: " << result << std::endl;
    return 0;
}