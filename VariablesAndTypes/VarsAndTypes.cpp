// Seven basic types
// Bools, Characters, Integers, Floating Point Numbers, void, wchar_t
// These can be modified using signed, unsigned, short and long

// We can also define our own types using structures
// and classes

// A typedef allows for creating new names for
// existing types.

#include <iostream>
using namespace std;

int main() {
    typedef int counter;
    counter tick_c = 100;

    // Enumerated types are best explained by example:
    enum colour {red, green, blue} a_colour, another_colour;
    a_colour = green;  // a_colour will be assigned value of '1'
    another_colour = red;

    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    cout << a << endl; // will print 1-2+3*4 = 11
    
    int sum = a + b + c;
    cout << sum << endl;

    return 0;
}