#include <iostream>


typedef long long aVeryLongNumberType; // usually declared outside of main function

/*
Outside main() → global alias (preferred).
Inside main() → local alias (rare, usually unnecessary).
*/

int main() {

    aVeryLongNumberType numberInQuestion = 12345678910; 

    std::cout << numberInQuestion;

    return 0;

    /*
    typedef is a reserved keyword used to create an additional name (alias) for another datatype
    new identifier for an existing type helps with readability and reduces typos

    its basically giving nicknames to datatypes to maybe shorten the name
    forexample long long we could typedef it as aVeryLongNumberType
    */

}