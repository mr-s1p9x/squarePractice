#ifndef INC_29JUNE_LESSON_PRACICE_CIRCLE_H
#define INC_29JUNE_LESSON_PRACICE_CIRCLE_H
#include "Figure.h"
#pragma once

class Circle : public Figure {
    // а = диаметр
public:
    Circle() = default;
    Circle(double d):Figure(d){}
    void Print() const; // Переопределение
    void Square() const; // Переопределение
    void SetA(double d); // Замещение
};


#endif //INC_29JUNE_LESSON_PRACICE_CIRCLE_H
