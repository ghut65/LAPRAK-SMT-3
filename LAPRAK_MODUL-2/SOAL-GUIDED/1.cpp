#include <iostream>
using namespace std;
int main() {
    int nilaiID[3] = { 80, 85, 90 };
    cout << "== array 1 dimensi ==" << endl;

    cout << "nilai pertama : " << nilaiID[0] << endl;
    cout << "nilai kedua   : " << nilaiID[1] << endl;
    cout << "nilai ketiga  : " << nilaiID[2] << endl;

    int nilai2D[2][3] = { 
        { 80, 85, 90 }, 
        { 75, 88, 92 } 
    };

    cout << endl;
    cout << "== array 2 dimensi ==" << endl;

    cout << "baris 0, kolom 0 : " << nilai2D[0][0] << endl;
    cout << "baris 0, kolom 1 : " << nilai2D[0][1] << endl;
    cout << "baris 1, kolom 2 : " << nilai2D[1][2] << endl;

    int nilai3D[2][2][2] = {
        { 
            { 80, 85 }, 
            { 75, 90 } 
        },
        { 
            { 88, 92 }, 
            { 78, 86 } 
        }
    };

    cout << endl;
    cout << "== array 3 dimensi ==" << endl;

    cout << "data [0][0][0] : " << nilai3D[0][0][0] << endl;
    cout << "data [0][1][1] : " << nilai3D[0][1][1] << endl;
    cout << "data [1][0][0] : " << nilai3D[1][0][0] << endl;
    cout << "data [1][1][1] : " << nilai3D[1][1][1] << endl;

    return 0;
}