#include <iostream>
using namespace std;
void tukarKali10(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;

    x = x * 10;
    y = y * 10;
}
int main() {
    int x, y;
    cin >> x >> y;
    tukarKali10(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}