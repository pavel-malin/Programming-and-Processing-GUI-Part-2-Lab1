#ifndef SYNCmanager_H
#define SYNCmanager_H

#include <QObject>
#include <QNetworkAccessManager>

class SyncManager : public QObject {
    Q_OBJECT
public:
    explicit SyncManager(QObject *parent = nullptr);

public slots:
    void syncTasks();
    void uploadTask(Task *task);
    void downloadTasks();

signals:
    void syncFinished(bool success);

private:
    QNetworkAccessManager m_networkManager;
    QString m_authToken;
};
#endif // SYNCmanager_H
