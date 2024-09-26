#include<iostream>
int main() {
setlocale (LC_ALL, "rus");
int N;
double a, b, c, s;
std::cout <<"Введите a"<< std::endl;
std::cin >> a;
std::cout <<"Введите b"<< std::endl;
std::cin >> b;
std::cout <<"Введите c"<< std::endl;
std::cin >> c;
std::cout <<"Введите N"<< std::endl;
std::cin >> N;
switch (N) {
case 2 : s = b * c - a * a;
break;
case 56 : s = b * c;
break;
case 7 : s = a * a + c;
break;
case 3 : s = a - b * c;
break;
default: 
s = (a + b) * (a + b) * (a + b);
break; 
}
std::cout << s<< std::endl;
return 0; }