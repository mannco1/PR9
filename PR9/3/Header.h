#include <iostream>
using namespace std;

template <class Atype>
class Set {
    Atype* a;
    int len;
    int count;
public:
    Set(int size);
    ~Set();
    bool Is_Empty();
    bool Is_Full();
    bool Add(Atype T);
    bool In_Set(Atype T);
    Atype Get(Atype T);
};
