#ifndef INC_29JUNE_LESSON_PRACICE_FIGURE_H
#define INC_29JUNE_LESSON_PRACICE_FIGURE_H
#pragma once

class Figure {
protected:
    double a;
public:
    Figure()=default;
    Figure(double b) : a(b) {}
    void Print() const;
    void Square() const;
    void SetA();
};


#endif //INC_29JUNE_LESSON_PRACICE_FIGURE_H
