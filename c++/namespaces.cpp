#include <iostream>

// namespaces should be decleard outside of main function
// can think of it sort of like a container for global variable 

namespace loke {
    std::string name = "yao ren loke";
}

namespace lim {
    std::string name = "yao ren lim";
}

namespace tan {
    std::string name = "yao ren tan";
}

int main() {

    std::cout << loke::name << "\n";

    // could use like this too
    using namespace lim;

    std::cout << lim::name << "\n";

    // could also
    using std::string;

    string name = "yao ren chia";
    
    std::cout << name;

    

   /*
   namespaces provides a solution for preventing name conflictsin larger projects.
   each entity needs a unique name, a namespace allows for identically named entities as long as namespaces are different
   so like 2 variables can be x, but both must be in their own namespaces
   example:
   both people are yaoren, but they belong to different families, loke yaoren and lim yaoren
   */ 

}