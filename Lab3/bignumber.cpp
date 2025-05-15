#include "bignumber.h"
#include <algorithm>

BigNumber::BigNumber(const QString& numberStr) {
    QString num = numberStr;
    std::reverse(num.begin(), num.end());

    for (int i = 0; i < num.length(); i += 3) {
        QString chunk = num.mid(i, 3);
        std::reverse(chunk.begin(), chunk.end());
        digits.append(chunk.toInt());
    }
}

void BigNumber::add(const BigNumber& other) {
    int carry = 0;
    for (int i = 0; i < qMax(digits.size(), other.digits.size()) || carry; ++i) {
        if (i == digits.size()) digits.append(0);
        int sum = digits[i] + (i < other.digits.size() ? other.digits[i] : 0) + carry;
        carry = sum >= BASE;
        digits[i] = sum % BASE;
    }
    normalize();
}

void BigNumber::subtract(const BigNumber& other) {
    int borrow = 0;
    for (int i = 0; i < digits.size(); ++i) {
        int sub = digits[i] - borrow - (i < other.digits.size() ? other.digits[i] : 0);
        borrow = (sub < 0) ? 1 : 0;
        digits[i] = (sub + BASE) % BASE;
    }
    normalize();
}

void BigNumber::multiply(int factor) {
    int carry = 0;
    for (int i = 0; i < digits.size() || carry; ++i) {
        if (i == digits.size()) digits.append(0);
        long long cur = carry + digits[i] * 1LL * factor;
        digits[i] = cur % BASE;
        carry = cur / BASE;
    }
    normalize();
}

void BigNumber::divide(int divisor) {
    int carry = 0;
    for (int i = digits.size() - 1; i >= 0; --i) {
        long long cur = digits[i] + carry * 1LL * BASE;
        digits[i] = cur / divisor;
        carry = cur % divisor;
    }
    normalize();
}

QString BigNumber::toString() const {
    QString result;
    for (int i = digits.size() - 1; i >= 0; --i) {
        QString chunk = QString::number(digits[i]);
        if (i != digits.size() - 1) {
            chunk = chunk.rightJustified(3, '0');
        }
        result += chunk;
    }
    return result;
}

void BigNumber::normalize() {
    while (digits.size() > 1 && digits.back() == 0) {
        digits.pop_back();
    }
}
