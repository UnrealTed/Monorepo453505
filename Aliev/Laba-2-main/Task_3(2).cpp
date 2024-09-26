#include <bits/stdc++.h>
using namespace std;

int main() {
    double b1;
    int n = 10;  
    cout << "Введите первый член геометрической прогрессии (b1): ";
    cin >> b1;

    double q = 1.0 / (n + 1);
    double sum = b1 / (1 - q);

    cout << "Сумма всех членов убывающей геометрической прогрессии: " << sum << endl;

    return 0;
}