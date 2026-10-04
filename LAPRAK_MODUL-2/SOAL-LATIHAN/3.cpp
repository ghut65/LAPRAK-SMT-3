#include <iostream>
using namespace std;
int hitungKarakter(char kata[], char c) {
    int jumlah = 0;
    for (int i = 0; kata[i] != '\0'; i++) {   
        if (kata[i] == c) {
            jumlah++;
        }
    }
    return jumlah;
}
int main() {
    char kata[100];
    char cari;
    cin >> kata;
    cin >> cari;
    cout << hitungKarakter(kata, cari) << endl;
    return 0;
}