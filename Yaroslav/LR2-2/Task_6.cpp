#include <iostream>
#include <cmath>
int main() {
setlocale (LC_ALL, "rus");    
double Y, A, D, K, C, B, p, x;
std::cout <<"Введите значение числа D"<< std::endl;
std::cin >>D;
std::cout <<"Введите значение числа C"<< std::endl; 
std::cin >>C;
std::cout <<"Введите значение числа K"<< std::endl; 
std::cin >>K;
std::cout <<"Введите значение числа x"<< std::endl;
std::cin >>x;
std::cout <<"Введите значение числа p"<< std::endl;
std::cin >>p;
A = x + sin(p);
B = exp(K);
Y = 1 + ((K * K) / (2 * A * B)) - B + (D * C);
std::cout <<Y;
return 0;
}


