#include <iostream>
#include <cmath>
int main() {
setlocale (LC_ALL, "rus");
double B, K, Q, D, C, p, n, x;
std::cout <<"Введите значение числа K"<< std::endl;
std::cin >>K;
std::cout <<"Введите значение числа D"<< std::endl;
std::cin >>D;
std::cout <<"Введите значение числа x"<< std::endl;
std::cin >>x;
std::cout <<"Введите значение числа p"<< std::endl;
std::cin >>p;
std::cout <<"Введите значение числа n"<< std::endl;
std::cin >>n;
B = cos(x);
C = p - n;
Q = ((B * B) / (K * D)) + (B * C * C * C);
std::cout <<Q;
return 0;
}
