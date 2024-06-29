#include "Figure.h"
#include "triangle.h"
#include <iostream>
#include <cmath>  // Для sqrt и pow
using namespace std;

void Triangle::Print() const
{
    cout << "Triangle\n";
}

void Triangle::Square() const
{
    // Используем формулу Герона для нахождения площади треугольника
    double s = (a + b + c) / 2;
    cout << "Triangle square = " << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;
}