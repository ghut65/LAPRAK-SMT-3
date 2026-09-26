#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout << "input: ";
    cin >> n;
     string fullLeft = "";
    for (int i = n; i >= 1; i--) {
        fullLeft += to_string(i);
        if (i > 1) fullLeft += " ";
    }
    int lebar = fullLeft.length();
    for (int k = n; k >= 0; k--) {
        string kiri = "";
        for (int i = k; i >= 1; i--) {
            kiri += to_string(i);
            if (i > 1) kiri += " ";
        }
        string kanan = "";
        for (int i = 1; i <= k; i++) {
            kanan += to_string(i);
            if (i < k) kanan += " ";
        }
         int indent = lebar - (int)kiri.length();
        for (int s = 0; s < indent; s++) cout << " ";
 
        cout << kiri << " * " << kanan << endl;
    }
    return 0;
}
