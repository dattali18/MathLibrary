#include <iostream>
#include "Vector.h"

#define LEN(arr) (sizeof((arr)) / sizeof((arr)[0]))

using std::cout;
using std::endl;
using std::cin;



int main() {
    int v[] = {1, 2, 6};

    try {
        Vector v1(3, v, LEN(v));
    } catch (const char * exp) {cout << exp << endl;}

    return 0;
}

