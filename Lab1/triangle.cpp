#include "triangle.h"

Triangle::Triangle(const Point2D& p1, const Point2D& p2, const Point2D& p3)
    : p1(p1), p2(p2), p3(p3) {}

Point2D Triangle::getP1() const { return p1; }
Point2D Triangle::getP2() const { return p2; }
Point2D Triangle::getP3() const { return p3; }

void Triangle::move(int dx, int dy) {
    p1.addX(dx); p1.addY(dy);
    p2.addX(dx); p2.addY(dy);
    p3.addX(dx); p3.addY(dy);
}
