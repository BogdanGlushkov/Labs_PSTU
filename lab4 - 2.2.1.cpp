#include <iostream>
using namespace std; // ввод, вывод

int main()
{
    float c, f; // объявление переменных в формате float
    cout << "Type temperature in degrees fahrenheit: ";
    cin >> f; // ввод переменной под фаренгейты
    c = 5.0f/9.0f*(f-32); // вычисление значения температуры в градусах цельсиях
    cout << "Temperature in degrees сelsius: " << c << endl;//вывод температуры в градусах цельсия
}

