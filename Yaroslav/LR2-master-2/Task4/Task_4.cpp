#include <iostream>
int main(){
setlocale(LC_ALL, "rus");
int X, Y;
std::cout << "Ввидете число X." << std::endl;
std::cin >> X;
std::cout << "Ввидете число Y." << std::endl;
std::cin >> Y;
if (X>Y) {
Y=0;}
else if (Y>X) {
X=0; }
else{
X=0; 
Y=0; }
std::cout << "Число X: " << X << std::endl; 
std::cout << "Число Y: " << Y << std::endl;
double A, B, C, K;
std::cout << "Ввидете число A."<< std::endl;
std::cin >> A;
std::cout << "Ввидете число B."<< std::endl;
std::cin >> B;
std::cout << "Ввидете число C."<< std::endl;
std::cin >> C;
std::cout << "Наибольшее из чисел A, B, C будет уменьшено на K. Введите K." << std::endl;
std::cin >> K;
if ((A>B) && (A>C)) {
A -= K;
}
else if ((B>A) && (B>C)) {
B -= K;
}
 else if ((C>A) && (C>B)) {
C -=K;
}
std::cout << "Число A: "<< A << std::endl;
std::cout << "Число B: "<< B << std::endl;
std::cout << "Число C: "<< C << std::endl;
return 0;
}