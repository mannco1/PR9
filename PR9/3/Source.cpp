#include "Header.h"

template <class Atype>
Set<Atype>::Set(int size) {
    len = size;
    count = 0;
    a = new Atype[size];
}

template <class Atype>
Set<Atype>::~Set() {
    delete[] a;
}

template <class Atype>
bool Set<Atype>::Is_Empty() {
    return count == 0;
}

template <class Atype>
bool Set<Atype>::Is_Full() {
    return count == len;
}

template <class Atype>
bool Set<Atype>::Add(Atype T) {
    if (Is_Full() || In_Set(T)) {
        return false;
    }
    a[count++] = T;
    return true;
}

template <class Atype>
bool Set<Atype>::In_Set(Atype T) {
    for (int i = 0; i < count; i++) {
        if (a[i] == T) {
            return true;
        }
    }
    return false;
}

template <class Atype>
Atype Set<Atype>::Get(Atype T) {
    for (int i = 0; i < count; i++) {
        if (a[i] == T) {
            for (int j = i; j < count - 1; j++) {
                a[j] = a[j + 1];
            }
            count--;
            return T;
        }
    }
    return T;
}
