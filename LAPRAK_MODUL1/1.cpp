#include <iostream>
using namespace std;

int main(){
    float bil1, bil2;

    cout << "bilangan pertama  : ";
    cin >> bil1;
    cout << "bilangan kedua    : ";
    cin >> bil2;

    float tambah = bil1 + bil2;
    float kurang = bil1 - bil2;
    float kali   = bil1 * bil2;

    cout << "\nHasil penjumlahan = " << tambah << endl;
    cout << "Hasil pengurangan = " << kurang << endl;
    cout << "Hasil perkalian   = " << kali   << endl;

    if (bil2 != 0) {
        float bagi = bil1 / bil2;
        cout << "Hasil pembagian   = " << bagi << endl;
    } else {
        cout << "Hasil pembagian   = " << endl;
    }

    return 0;
}