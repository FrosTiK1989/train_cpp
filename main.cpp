#include <iostream>

int main() {
    // Инициализируем две переменные для сохранения информации от пользователя.
    int firstDigit {};
    int secondDigit {};
    // Выводим в консоль запрос на ввод этих чисел.
    std::cout << "Insert first digit: " << std::endl;
    std::cin >> firstDigit;
    std::cout << "Insert second digit: " << std::endl;
    std::cin >> secondDigit;
    // Благодарим пользователя и уходим на вычисление.
    std::cout << "Thanks! \nNow I'll compare these numbers." << std::endl;
    // Начинаем процесс сравнения введенных чисел.
    if(firstDigit != secondDigit)
        std::cout << "Digits not equals" << std::endl;
    else
        std::cout << "Digits is equals" << std::endl;
}