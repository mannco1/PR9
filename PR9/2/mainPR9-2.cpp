#include "Header.h"

int main() {
    int size = 5;
    int* arrayInt = new int[size] {5, 4, 3, 2, 1};
    sortArray(arrayInt, size);
    for (int i = 0; i < size; i++) {
        cout << arrayInt[i] << " ";
    }
    cout << endl;

    float* arrayFloat = new float[size] {5.5, 4.4, 3.3, 2.2, 1.1};
    sortArray(arrayFloat, size);
    for (int i = 0; i < size; i++) {
        cout << arrayFloat[i] << " ";
    }
    cout << endl;

    string* arrayString = new string[size]{ "e", "d", "c", "b", "a" };
    sortArray(arrayString, size);
    for (int i = 0; i < size; i++) {
        cout << arrayString[i] << " ";
    }
    cout << endl;

    delete[] arrayInt;
    delete[] arrayFloat;
    delete[] arrayString;

    return 0;
}
