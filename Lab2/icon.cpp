#include "icon.h"

Icon::Icon(const QString &imagePath, const QSize &size) :
    image(imagePath),
    size(size) {}

QPixmap Icon::getImage() const { return image.scaled(size); }
QPoint Icon::getPosition() const { return position; }
void Icon::setPosition(const QPoint &pos) { position = pos; }
