#ifndef ICONLIST_H
#define ICONLIST_H

#include <QList>
#include <QDir>
#include "icon.h"

class IconList {
public:
    IconList(const QSize &size);
    void loadFromFolder(const QString &path);
    QList<Icon> getIcons() const;

private:
    QList<Icon> icons;
    QSize iconSize;
};

#endif // ICONLIST_H
