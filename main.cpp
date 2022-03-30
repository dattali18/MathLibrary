#include <iostream>
#include "Vector.h"

#define LEN(arr) (sizeof((arr)) / sizeof((arr)[0]))

using std::cout;
using std::endl;
using std::cin;



int main() {
    const int SIZE = 5;
    int v[SIZE] = {1, 2, 6, 3, -1};

    try {
        Vector v1(SIZE, v, LEN(v)), v2(3);
        cout << v1 << endl;
        cin >> v2;
        cout << v2 << endl;
    } catch (const char * exp) { cout << exp << endl;}

    return 0;
}

