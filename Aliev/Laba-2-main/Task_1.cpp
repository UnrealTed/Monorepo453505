#include <bits/stdc++.h>
using namespace std;

int main() {
    double x;
    cout << "Введите значение x: ";
    cin >> x;

    double x2 = x * x;
    double x3 = x * x2;

    // Выражения
    double oper1 = 23 * x3 + 69 * x2 + 32 * x + 8;
    double oper2 = -23 * x3 + 69 * x2 - 32 * x + 8;

    cout << "result 1 =  " << oper1 << endl;
    cout << "result 2 =  " << oper2 << endl;

    return 0;
}