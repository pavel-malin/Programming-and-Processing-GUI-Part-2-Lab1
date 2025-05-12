#ifndef SQUARE_H
#define SQUARE_H

#include "quadrilateral.h"

class Square : public Quadrilateral {
public:
    Square(const Point2D& topLeft, int size);
};

#endif // SQUARE_H
