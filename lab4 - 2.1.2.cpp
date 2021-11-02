#include <iostream>
using namespace std; // ввод, вывод

int main()
{
    int c; // объявление переменной c
    cout << "type the number of gallons: ";
    cin >> c; // ввод переменной c
    cout << " " << endl
        << "equivalent volume in cubic pounds: " << c / 7.481 << " ft^3" << endl; // вывод эквивалентного объема в кубических фунтах
}
