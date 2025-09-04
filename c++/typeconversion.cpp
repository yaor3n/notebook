#include <iostream>

int main() {

    /*
    type conversion is the conversion of a value of one datatype to another
    implicit type conversion = automatic
    explicit = precede value with new datatype (int)
    */

    // implicit
    int a = 5;
    double b = a;  // int → double (5 → 5.0)

    // explicit
    double pi = 3.14;
    int num = (int) pi;   // old C-style cast
    int num2 = int(pi);   // function-style cast



    double x = (int) 3.14;
    
    // basically like type casting in python 

    std::cout << x;

    return 0;
}