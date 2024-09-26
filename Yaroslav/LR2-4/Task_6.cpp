#include <iostream>
#include <cmath>
int main() {
setlocale (LC_ALL, "rus");
double A, B, K, C, D, T, z, y, x;
std::cout <<"Введите значение числа K"<< std::endl;
std::cin >>K;
std::cout <<"Введите значение числа C"<< std::endl;
std::cin >>C;
std::cout <<"Введите значение числа D"<< std::endl;
std::cin >>D;
std::cout <<"Введите значение числа x"<< std::endl;
std::cin >>x;
std::cout <<"Введите значение числа y"<< std::endl;
std::cin >>y;
std::cout <<"Введите значение числа z"<< std::endl;
std::cin >>z;
B = sqrt(z);
A = x - y;
T = (cos(x) + ((A * A) / (K - C*D)) - B);
std::cout <<T;
return 0;
}
