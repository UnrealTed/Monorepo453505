#include <bits/stdc++.h>
using namespace std;

int main() {
    double X, Y;
    cout << "Введите X и Y: ";
    cin >> X >> Y;
    double max = (X > Y) ? X : Y;

      /*double max;
    if (X > Y) {
        max = X;
    } else {
        max = Y;
    }*/

    cout << "Максимальное значение: " << max << endl;

    return 0;
}