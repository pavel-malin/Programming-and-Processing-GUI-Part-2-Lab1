#include "quadrilateral.h"

Quadrilateral::Quadrilateral(const Point2D& topLeft, int width, int height)
    : topLeft(topLeft), width(width), height(height) {}

void Quadrilateral::move(int dx, int dy) {
    topLeft.addX(dx);
    topLeft.addY(dy);
}

Point2D Quadrilateral::getTopLeft() const { return topLeft; }
int Quadrilateral::getWidth() const { return width; }
int Quadrilateral::getHeight() const { return height; }
