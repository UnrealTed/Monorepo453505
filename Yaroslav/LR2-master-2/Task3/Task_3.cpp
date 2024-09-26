#include <iostream>
int main() {
double b1, q=1.0/18.0, sum;
setlocale(LC_ALL, "rus");    
std::cout<<"Введите первый член геометрической прогрессии b1."<< std::endl;
std::cin>> b1;
sum = b1 / (1-q);
std::cout<< sum << std::endl;
return 0;
}


