#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "point2d.h"

class Quadrilateral {
private:
    Point2D topLeft;
    int width, height;
public:
    Quadrilateral(const Point2D& topLeft, int width, int height);
    void move(int dx, int dy);
    Point2D getTopLeft() const;
    int getWidth() const;
    int getHeight() const;
};

#endif // QUADRILATERAL_H
