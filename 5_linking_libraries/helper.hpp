#include <nlohmann/json.hpp>

namespace sample
{

class helper
{
public:
    helper();
    ~helper();
    std::string load_json_object();
};

}