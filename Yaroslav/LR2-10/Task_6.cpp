#include <iostream>
#include <cmath>
int main(){
setlocale (LC_ALL, "rus");    
double A, B, C, D, Y, x, k, z;
std::cout <<"Введите значение числа C"<< std::endl;
std::cin >>C;
std::cout <<"Введите значение числа D"<< std::endl;
std::cin >>D;
std::cout <<"Введите значение числа x"<< std::endl;
std::cin >>x;
std::cout <<"Введите значение числа k"<< std::endl;
std::cin >>k;
std::cout <<"Введите значение числа z"<< std::endl;
std::cin >>z;
A = (log(x) - k);
B = sqrt(z);
Y = ((D * D) + ((C * C) / (0.75 * A)) + B);
std::cout <<Y<< std::endl;
return 0;
}

