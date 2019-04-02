
#include <padleft.hpp>

namespace pl {

std::string pad_left(const std::string& str, int num_spaces)

{

    std::string spc = "";
    
    for (int i = 0; i < num_spaces; i++) {
        spc += " ";
    }

    out = spc + str;

    return out;

}

}

