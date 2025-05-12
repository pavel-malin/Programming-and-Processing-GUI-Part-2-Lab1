#ifndef POINT2D_H
#define POINT2D_H

    class Point2D {
private:
    int x, y;
public:
    Point2D(int x = 0, int y = 0);
    int getX() const;
    int getY() const;
    void addX(int dx);
    void addY(int dy);
};

#endif // POINT2D_H
