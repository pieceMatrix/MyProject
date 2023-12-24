#include "sdt.h"
#include <iostream>

int main() {
    int num1, num2;  
    std::cout << "Введите первое целое число: ";
    std::cin >> num1; 
    std::cout << "Введите второе целое число: ";
    std::cin >> num2; 
    int sum = num1 + num2;
    std::cout << "Сумма введенных чисел: " << sum << std::endl;
    return 0;
}