#include <iostream>

using namespace std;

int learn() {
    // Создадим константу pi и присвоим ей значение 3.14
    const double pi = {3.14};
    /* Создадим переменную типа double для хранения данных от
    пользователя */
    double radius = {0};
    /* Выведем приветственное сообщение пользователю и запросим
     у него радус окружности */
    cout << "Привет, мой друг!" << endl;
    cout << "Какой радиус вычисляемой окружности? ";
    // Получим данные от поьзователя и запишем в переменну radius
    cin >> radius;
    // Сделаем вид, что работаем
    cout << "Начинаю вычислене...подождите" << endl;
    // Производим вычисления и запишем их в переменную square
    const double square = pi * pow(radius, 2);
    // Озвучиваем результат пользователю
    cout << "Площадь вашей окружнности равна: " << square << endl;
    return 0;
}

int metors() {
    // Создадим переменную для ввода от пользователя
    int metors = {0};
    //Создадим константу на 1 км
    const int metorsInKm = {1000};
    // Запросим сколько метров есть
    cout << "Сколько метров надо перевести?: ";
    cin >> metors;
    cout << "Вычисляю..." << endl;
    // Запишем результат в переменные
    const int km = metors / metorsInKm;
    const int metor = metors % metorsInKm;
    // Выведем результат в консоль
    cout << "У меня есть результат" << endl;
    cout << km << " километра и " << metor << " метров." << endl;
    return 0;
}

int converter() {
    /*
        Запросим текущий курс доллара к рублю
        и создадим переменную curs для ее хранения
     */
    double curs = {0};
    cout << "Какой нынче курс доллара к рублю?: ";
    cin >> curs;
    /*
        Поблагодарим пользователя и спросим сколько рублей у него есть,
        предварительно создадим переменную rubles
     */
    double rubles = {0};
    cout << "Спасибо! \nА сколько рублей надо перевести в доллары?: ";
    cin >> rubles;
    // Создадим переменную для вычислления и назовем ее dollar
    const double dollar = rubles / curs;
    // Выдадим результат пользователю
    cout << "Я тут посчитал и получается, что у нас выходит " << dollar << "$." << endl;
    return 0;
}

int main() {
    learn();
    metors();
    converter();
    return 0;
}

