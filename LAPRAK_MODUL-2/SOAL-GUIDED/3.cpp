#include <iostream>
using namespace std;

int TukarValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    return x;
}

void TukarPointer(int* px, int* py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

void TukarReferensi(int &px, int &py) {
    int temp = px;
    px = py;
    py = temp;
}

int main() {
    int a = 4, b = 6;
    cout << "Kondisi awal -> a: " << a << " b: " << b << endl;
    TukarValue(a, b);
    cout << "Setelah TukarValue -> a: " << a << " b: " << b << endl;
    TukarPointer(&a, &b);
    cout << "Setelah TukarPointer -> a: " << a << " b: " << b << endl;
    TukarReferensi(a, b);
    cout << "Setelah TukarReferensi -> a: " << a << " b: " << b << endl;
    return 0;
}

