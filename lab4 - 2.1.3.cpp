﻿#include <iostream>
using namespace std; // ввод, вывод

int main()
{
    int a = 10; // присваивание переменной a значение 10
    cout << a << endl; // вывод переменной a (a = 10)
    a *= 2; // умножение изначального значения (a = 10) на 2
        cout << a-- << endl // вывод постфикс декремента a output:(a = 20) после (a = 19)
        << a << endl; // вывод a (a = 19)
}
