#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include "triangle.h"
#include "quadrilateral.h"
#include "square.h"

class Canvas : public QWidget {
    Q_OBJECT
public:
    explicit Canvas(QWidget *parent = nullptr);
    void setTriangle(const Triangle& triangle);
    void setQuadrilateral(const Quadrilateral& quad);
    void setSquare(const Square& square);
    void clear();

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    Triangle triangle;
    Quadrilateral quad;
    Square square;
    bool hasTriangle = false;
    bool hasQuad = false;
    bool hasSquare = false;
};

#endif // CANVAS_H
