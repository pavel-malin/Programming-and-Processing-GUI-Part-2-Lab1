#include "point2d.h"

Point2D::Point2D(int x, int y) : x(x), y(y) {}

int Point2D::getX() const { return x; }
int Point2D::getY() const { return y; }

void Point2D::addX(int dx) { x += dx; }
void Point2D::addY(int dy) { y += dy; }
