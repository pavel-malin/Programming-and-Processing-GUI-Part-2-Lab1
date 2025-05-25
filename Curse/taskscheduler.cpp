#include "taskscheduler.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QCalendarWidget>
#include <QMessageBox>
#include <algorithm>

TaskScheduler::TaskScheduler(QWidget *parent) : QWidget(parent) {
    setupUI();
    setupConnections();
}

void TaskScheduler::setupUI() {
    // ... (весь код из оригинального метода setupUI)
}

// ... (реализация всех остальных методов класса TaskScheduler)
