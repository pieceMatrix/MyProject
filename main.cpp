#include "sdt.h"
#include <iostream>
//это учебная программа
int main() {
    int num1, num2;  
    std::cout << "Введите первое целое число: ";
    std::cin >> num1; 
    std::cout << "Введите второе целое число: ";
    std::cin >> num2; 
    int sum = num1 + num2;
    std::cout << "Сумма введенных чисел: " << sum << std::endl;
    int diff = num1 - num2;
    std::cout << "Разность введенных чисел: " << diff << std::endl;
    int product = num1 * num2;
    std::cout << "Произведение введенных чисел: " << product << std::endl;
    return 0;
}