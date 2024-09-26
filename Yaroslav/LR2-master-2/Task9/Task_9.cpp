#include <iostream>
#include <cmath>
int main(){
setlocale (LC_ALL, "rus");
double z, a, f, y, x;
int num;
std::cout <<"Условия для x:"<< std::endl;
std::cout <<"x = z² при z<1"<< std::endl;
std::cout <<"x = z + 1 при z >= 1"<< std::endl;
std::cout <<"Введите значение числа z"<< std::endl;
std::cin >>z;
std::cout <<"Введите значение числа a"<< std::endl;
std::cin >>a;
z < 1 ? x = z * z : x = z + 1;
std::cout <<"На выбор даются три функции f(x)"<< std::endl;
std::cout <<"Для выбора функции надо будет вписать её номер. Для функции 2x напишите 1, для функции x³ напишите 2, для функции x/3 напишите 3"<< std::endl;
std::cin >>num;
switch(num) {
    case 1 : f = 2 * x;
    break;

    case 2 : f = x * x * x;
    break;
    
    case 3 : f = x / 3;
    break;
default:
std::cout<<"На выбор всего 3 функции. Следственно вы можете написать только 1, 2, 3"<< std::endl;
return 1;}
y = a * log(1 + pow (x, 0.2)) + pow(cos(f +1), 2);
std::cout <<"y равен: "<< y <<std::endl;
return 0;
}