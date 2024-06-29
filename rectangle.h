#ifndef INC_29JUNE_LESSON_PRACICE_RECTANGLE_H
#define INC_29JUNE_LESSON_PRACICE_RECTANGLE_H
#include "Figure.h"

class Rectangle : public Figure {
protected:
    double b; // дополнительная переменная для второй стороны

public:
    Rectangle(double width, double height) : Figure(width), b(height) {}
    void Print() const;
    void Square() const;
};

#endif //INC_29JUNE_LESSON_PRACICE_RECTANGLE_H
