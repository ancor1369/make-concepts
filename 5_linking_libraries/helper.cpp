#include <iostream>
#include "helper.hpp"

//Type alias
using json = nlohmann::json;

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

std::string helper::load_json_object()
{
    json sample_object;

    sample_object["one"] = "Value for property One";
    sample_object["two"] = "Value for property Two";    
    
    return sample_object.dump(1);
}

} // namespace helper
