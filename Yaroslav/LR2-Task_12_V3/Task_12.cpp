#include <iostream>
double urav(double p, double q, double x) {
return x * x * x + p * x + q;
}
double proisvodn(double p, double x) {
return 3 * x * x + p;
}
void niuton(double p, double q, double n1) {
double x = n1; 
double y = urav(p, q, x);
double d;
while (true) {
d = proisvodn(p, x); 
if (d == 0) {
std::cout <<"Производная равна нулю." << std::endl;
return; 
}
x = x - y / d;  
y = urav(p, q, x);  
if (y == 0) {  
std::cout <<"Найден корень: x = " << x << std::endl;
return;  
}
}
}
int main() {
double p, q;
std::cout <<"Введите значения p, q: "<< std::endl;
std::cin >> p >> q;
double n1 = 0;  
niuton(p, q, n1);
return 0;
}