#include <iostream>
#include <string> // include when using std::string

int main() {

    /*
    cout << (insertion operator)
    cin >> (extraction operator)
    */

    // simple Q&A example
    std::string name;
    std::string fullname;

    std::cout << "please enter your name (no space): ";
    std::cin >> name;
    // ^ this only gets characters without spaces

    std::cout << "please enter your name (with space): ";
    // ^ this includes the whole line of strings including spaces
    std::getline(std::cin, fullname);

    std::cout << "hi " << name << std::endl;
    std::cout << "hi " << fullname << std::endl;
    
    return 0;
}