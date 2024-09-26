#include <iostream>
int evcl(int a, int b) {
while (a != 0 && b != 0) {
if (a > b) {
a = a % b; 
std::cout << a << " " << b << std::endl;
}
else {
b = b % a;
std::cout << a << " " << b << std::endl;
}
}
return a + b;
}
int main() {
int a, b;
setlocale(LC_ALL, "rus");
std::cout <<"С помощью алгоритма Евклида найдём НОД чисел a, b"<< std::endl;
std::cout <<"Введём значение чисел a, b"<< std::endl;
std::cin >> a >> b;
std::cout << evcl(a, b)<< std::endl;
return 0;
}