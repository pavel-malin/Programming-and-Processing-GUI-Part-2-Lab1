#include "iconlist.h"
#include <QDir>

IconList::IconList(const QSize &size) : iconSize(size) {}

void IconList::loadFromFolder(const QString &path) {
    QDir dir(path);
    QStringList filters {"*.png"};
    for (const auto &file : dir.entryList(filters)) {
        icons.append(Icon(dir.filePath(file), iconSize));
    }
}

QList<Icon> IconList::getIcons() const {
    return icons;
}
