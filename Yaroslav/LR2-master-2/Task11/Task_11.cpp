#include <iostream>
int main(){
int h1, min1, h2, min2, time1, time2, time3, h3, min3;
std::cout <<"Введите время когда электронные часы показывали h1 часов и min1 минут."<< std::endl;
std::cin >> h1 >> min1;
std::cout <<"Введите время когда электронные часы показывали h2 часов и min2 минут."<< std::endl;
std::cin >> h2 >> min2;
time1 = h1 * 60 + min1;
time2 = h2 * 60 + min2;

if (time2 < time1) {
time2 += 1440;
}
time3 = time2 - time1;
h3 = time3 / 60;
min3 = time3 % 60;
std::cout <<"На решение задач студент потратил "<< h3 <<"часов и "<< min3 <<" минут"<< std::endl;
}