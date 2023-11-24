#include <iostream>

int main() {
    // Создадим переменную для ввода от пользователя
    int metors {0};
    //Создадим константу на 1 км
    constexpr int metorsInKm {1000};
    // Запросим сколько метров есть
    std::cout << "Сколько метров надо перевести?: ";
    std::cin >> metors;
    std::cout << "Вычисляю..." << std::endl;
    // Запишем результат в переменные
    const int km = metors / metorsInKm;
    const int metor = metors % metorsInKm;
    // Выведем результат в консоль
    std::cout << "У меня есть результат" << std::endl;
    std::cout << km << " километра и " << metor << "метров.";
    return 0;
}