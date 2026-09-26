#include <iostream>
#include <string>
using namespace std;
 
string satuan[] = {"", "satu", "dua", "tiga", "empat",
                    "lima", "enam", "tujuh", "delapan", "sembilan"};
 
string angkaKeHuruf(int n){
    if (n == 0)   return "nol";
    if (n == 100) return "seratus";
    if (n < 10)   return satuan[n];
    if (n == 10)  return "sepuluh";
    if (n == 11)  return "sebelas";
    if (n < 20)   return satuan[n - 10] + " belas";
    int puluhan = n / 10;
    int sisa    = n % 10;
    string hasil = satuan[puluhan] + " puluh";
    if (sisa != 0) {
        hasil += " " + satuan[sisa];
    }
    return hasil;
}
int main(){
    int n;
    cout << "angka 0-100: ";
    cin >> n;
    if (n < 0 || n > 100) {
        cout << "di luar batas" << endl;
        return 0;
    }
    cout << n << " dibaca: " << angkaKeHuruf(n) << endl;
    return 0;
}
