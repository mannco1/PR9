#include "Header.h"

template <class T>
void Swap(T& x, T& y) {
    T z = x;
    x = y;
    y = z;
}

template <class T>
void OutXY(T& x, T& y) {
    cout << x << " " << y << "\n";
}

My_class::My_class(int a, float b) {
    this->a = a;
    this->b = b;
}

void My_class::Out() {
    cout << a << " " << b << "\n";
}

My_class My_class::operator = (My_class& T) {
    a = T.a;
    b = T.b;
    return *this;
}
