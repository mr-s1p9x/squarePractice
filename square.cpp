#include "square.h"
#include <iostream>
using namespace std;

void Ssquare::Print() const {
    cout << "Square\n";
}

void Ssquare::Square() const {
    cout << "Square Square = " << a * a << endl;  // a - сторона квадрата
}
