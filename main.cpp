#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include "square.h"

#include <iostream>
using namespace std;

int main() {
    Circle c (10);
    Rectangle r(4, 5);
    Triangle t(3, 4, 5);
    Ssquare s(4);

    c.Print();
    c.Square();

    cout << "----------------------" << endl;

    r.Print();
    r.Square();

    cout << "----------------------" << endl;

    t.Print();
    t.Square();

    cout << "----------------------" << endl;
    s.Print();
    s.Square();

    return 0;
}
