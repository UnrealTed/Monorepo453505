#include<iostream>
int main() {
setlocale(LC_ALL, "rus");
double x, x2, s1, s2, p1, p2;
std::cout << "Введите значение х" << std::endl;
std::cin >> x ;
x2=x*x;
p1= x*(23*x2 + 32);
p2=69*x2 + 8;
s1 =  p1 + p2;
s2 = p2 -p1;
std::cout<< s1 <<std::endl;
std::cout<< s2 <<std::endl;
return 0;
}