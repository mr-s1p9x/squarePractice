#ifndef INC_29JUNE_LESSON_PRACICE_TRIANGLE_H
#define INC_29JUNE_LESSON_PRACICE_TRIANGLE_H
#include "Figure.h"

class Triangle : public Figure {
protected:
    double b; // дополнительная переменная для первой стороны
    double c; // дополнительная переменная для второй стороны

public:
    Triangle(double a, double b, double c) : Figure(a), b(b), c(c) {}
    void Print() const;
    void Square() const;

};


#endif //INC_29JUNE_LESSON_PRACICE_TRIANGLE_H
