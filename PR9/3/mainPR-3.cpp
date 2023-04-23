#include "Header.h"

int main() {
    Set<int> setInt(5);
    cout << setInt.Is_Empty() << endl; 
    cout << setInt.Is_Full() << endl; 
    setInt.Add(1);
    setInt.Add(2);
    setInt.Add(3);
    cout << setInt.In_Set(2) << endl;
    cout << setInt.Get(2) << endl; 
    cout << setInt.In_Set(2) << endl; 

    return 0;
}
