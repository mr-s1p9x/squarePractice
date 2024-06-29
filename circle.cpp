#include "circle.h"
#include "Figure.h"
#include <iostream>
using namespace std;

void Circle::Print() const
{
    cout << "Circle\n";
}

void Circle::Square() const
{
    double R = a / 2; // a = диаметр, получаем от базового класса
    cout << "Circle Square = " << 3.14 * R * R << endl;
}

void Circle::SetA(double d)
{
    a = d;
}