#include <iostream>
using namespace std;

int main() {
    int matriks[3][3];         

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriks[i][j];
        }
    }

    int jumlah = 0;
    for (int i = 0; i < 3; i++) {
        jumlah += matriks[i][i];   
    }

    cout << jumlah << endl;
    return 0;
}