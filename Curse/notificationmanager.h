#ifndef NOTIFICATIONMANAGER_H
#define NOTIFICATIONMANAGER_H

#include <QObject>
#include <QSystemTrayIcon>

class NotificationManager : public QObject {
    Q_OBJECT
public:
    explicit NotificationManager(QObject *parent = nullptr);

public slots:
    void show(const QString &title, const QString &message);
    void schedule(Task *task);

private:
    QSystemTrayIcon *m_trayIcon;

#if defined(Q_OS_ANDROID)
    void showAndroidNotification(const QString &title, const QString &message);
#endif
};
#endif // NOTIFICATIONMANAGER_H
