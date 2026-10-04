#include <iostream>
using namespace std;

int maks3(int a, int b, int c) {
    int temp_maks = a;
    if (b > temp_maks) {
        temp_maks = b;
    }
    if (c > temp_maks) {
        temp_maks = c;
    }
    return temp_maks;
}

void tulis(int x) {
    for (int i = 0; i < x; i++) {
        cout << "baris ke-" << i + 1 << endl;
    }
}

int main() {
    int hasil_maks = maks3(10, 50, 30);
    cout << "nilai maksimalnya adalah: " << hasil_maks << endl;
    cout << "mulai panggil Prosedur: " << endl;
    tulis(3);
    return 0;
}
