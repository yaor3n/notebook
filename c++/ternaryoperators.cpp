#include <iostream>

int main() {

    /*
    ternary operator ?: = replacement for using if/else statements 
    condition ? expression1 (true branch) : expression2 (false branch);
    */

    int age = 2;

    std::string result = (age >= 18) ? "adult" : "minor";

    std::cout << result << std::endl;

    return 0;
}