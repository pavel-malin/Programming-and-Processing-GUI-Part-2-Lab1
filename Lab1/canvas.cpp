#include "canvas.h"
#include <QPainter>

Canvas::Canvas(QWidget *parent) : QWidget(parent),
    triangle(Point2D(), Point2D(), Point2D()),
    quad(Point2D(), 0, 0),
    square(Point2D(), 0)
{}

void Canvas::setTriangle(const Triangle& triangle) {
    this->triangle = triangle;
    hasTriangle = true;
    update();
}

void Canvas::setQuadrilateral(const Quadrilateral& quad) {
    this->quad = quad;
    hasQuad = true;
    update();
}

void Canvas::setSquare(const Square& square) {
    this->square = square;
    hasSquare = true;
    update();
}

void Canvas::clear() {
    hasTriangle = hasQuad = hasSquare = false;
    update();
}

void Canvas::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setPen(Qt::red);

    if (hasTriangle) {
        auto p1 = triangle.getP1();
        auto p2 = triangle.getP2();
        auto p3 = triangle.getP3();
        painter.drawLine(p1.getX(), p1.getY(), p2.getX(), p2.getY());
        painter.drawLine(p2.getX(), p2.getY(), p3.getX(), p3.getY());
        painter.drawLine(p3.getX(), p3.getY(), p1.getX(), p1.getY());
    }

    if (hasQuad) {
        auto tl = quad.getTopLeft();
        painter.drawRect(tl.getX(), tl.getY(), quad.getWidth(), quad.getHeight());
    }

    if (hasSquare) {
        auto tl = square.getTopLeft();
        int size = square.getWidth();
        painter.drawRect(tl.getX(), tl.getY(), size, size);
    }
}
