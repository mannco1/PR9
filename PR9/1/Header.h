#include <iostream>
using namespace std;

template <class T>
void Swap(T& x, T& y);

template <class T>
void OutXY(T& x, T& y);

class My_class {
    int a;
    float b;
public:
    My_class(int a, float b);
    void Out();
    My_class operator = (My_class& T);
};
