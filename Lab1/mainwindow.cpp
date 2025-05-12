#include "mainwindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QMessageBox>
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    canvas = new Canvas(this);
    layout->addWidget(canvas);

    // Кнопки и поля ввода
    QPushButton *generateBtn = new QPushButton("Сгенерировать случайные фигуры", this);
    QPushButton *moveBtn = new QPushButton("Переместить", this);
    dxInput = new QLineEdit(this);
    dyInput = new QLineEdit(this);

    QHBoxLayout *controls = new QHBoxLayout();
    controls->addWidget(new QLabel("Сдвиг X:"));
    controls->addWidget(dxInput);
    controls->addWidget(new QLabel("Сдвиг Y:"));
    controls->addWidget(dyInput);
    controls->addWidget(moveBtn);
    controls->addWidget(generateBtn);

    layout->addLayout(controls);
    setCentralWidget(centralWidget);

    connect(generateBtn, &QPushButton::clicked, this, &MainWindow::generateRandom);
    connect(moveBtn, &QPushButton::clicked, this, &MainWindow::moveShapes);
}

void MainWindow::generateRandom() {
    canvas->setTriangle(randomTriangle());
    canvas->setQuadrilateral(randomQuad());
    canvas->setSquare(randomSquare());
}

Triangle MainWindow::randomTriangle() {
    QRandomGenerator *rng = QRandomGenerator::global();
    int w = canvas->width(), h = canvas->height();
    Point2D p1(rng->bounded(w), rng->bounded(h));
    Point2D p2(rng->bounded(w), rng->bounded(h));
    Point2D p3(rng->bounded(w), rng->bounded(h));
    return Triangle(p1, p2, p3);
}

Quadrilateral MainWindow::randomQuad() {
    QRandomGenerator *rng = QRandomGenerator::global();
    int w = canvas->width(), h = canvas->height();
    return Quadrilateral(
        Point2D(rng->bounded(w), rng->bounded(h)),
        rng->bounded(100),
        rng->bounded(100)
        );
}

Square MainWindow::randomSquare() {
    QRandomGenerator *rng = QRandomGenerator::global();
    int w = canvas->width(), h = canvas->height();
    return Square(
        Point2D(rng->bounded(w), rng->bounded(h)),
        rng->bounded(100)
        );
}

void MainWindow::moveShapes() {
    int dx = dxInput->text().toInt();
    int dy = dyInput->text().toInt();

    canvas->update(); // Перерисовка
}
