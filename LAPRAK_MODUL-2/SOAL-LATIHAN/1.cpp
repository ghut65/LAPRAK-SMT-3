#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int nilai[N];             
    long long total = 0;
    for (int i = 0; i < N; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }
    int rata = total / N;      
    int diAtas = 0;
    for (int i = 0; i < N; i++) {
        if (nilai[i] > rata) {
            diAtas++;
        }
    }
  	cout << "Rata-rata: " << rata << endl;
    cout << "Di atas rata-rata: " << diAtas << endl;
    return 0;
}