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
if (num2 != 0) {
        double quotient = static_cast<double>(num1) / num2; // Приведение к типу double для точности
        std::cout << "Частное введенных чисел: " << quotient << std::endl;
    } else {
        std::cout << "Невозможно выполнить деление на ноль." << std::endl;
    }
    return 0;
}