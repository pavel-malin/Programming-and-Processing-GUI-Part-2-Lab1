#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point2d.h"

class Triangle {
private:
    Point2D p1, p2, p3;
public:
    Triangle(const Point2D& p1, const Point2D& p2, const Point2D& p3);
    Point2D getP1() const;
    Point2D getP2() const;
    Point2D getP3() const;
    void move(int dx, int dy);
};

#endif // TRIANGLE_H
