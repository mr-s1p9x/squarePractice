#include "rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::Print() const
{
    cout << "Rectangle\n";
}

void Rectangle::Square() const
{
    cout << "Rectangle Square = " << a * b << endl; // а - ширина, b - высота
}