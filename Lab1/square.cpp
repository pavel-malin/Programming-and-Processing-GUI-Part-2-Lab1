#include "square.h"

Square::Square(const Point2D& topLeft, int size)
    : Quadrilateral(topLeft, size, size) {}
