#ifndef BIGNUMBER_H
#define BIGNUMBER_H

#include <QVector>
#include <QString>

class BigNumber {
public:
    BigNumber(const QString& numberStr = "0");
    void add(const BigNumber& other);
    void subtract(const BigNumber& other);
    void multiply(int factor);
    void divide(int divisor);
    QString toString() const;

private:
    QVector<int> digits;
    static const int BASE = 1000;
    void normalize();
};

#endif // BIGNUMBER_H
