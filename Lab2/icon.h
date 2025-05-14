#ifndef ICON_H
#define ICON_H

#include <QPixmap>
#include <QPoint>
#include <QSize>

class Icon {
public:
    Icon(const QString &imagePath, const QSize &size);
    QPixmap getImage() const;
    QPoint getPosition() const;
    void setPosition(const QPoint &pos);

private:
    QPixmap image;
    QPoint position;
    QSize size;
};

#endif // ICON_H
