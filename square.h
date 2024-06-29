#ifndef INC_29JUNE_LESSON_PRACICE_SQUARE_H
#define INC_29JUNE_LESSON_PRACICE_SQUARE_H
#include "Figure.h"

class Ssquare : public Figure  {
public:
    Ssquare(double side) : Figure(side) {}
    void Print() const;
    void Square() const;
};


#endif //INC_29JUNE_LESSON_PRACICE_SQUARE_H
