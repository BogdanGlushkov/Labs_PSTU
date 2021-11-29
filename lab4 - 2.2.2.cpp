﻿#include <iostream>
using namespace std; // ввод, вывод

int main()
{
    int t1, t2, time; // объявление переменных под расчет секунд и вычисления конечного времени в еденицах измерения
    int sec1, min1, hour1; // объявление переменных под ввод первого времени
    int sec2, min2, hour2; // объявление переменных под ввод второго времени
    int sec, min, hour; // объявление переменных под вывод конечного времени

    cout << "first time (hours minutes seconds) " << endl;
    cin >> hour1 >> min1 >> sec1; // ввод первого времени
    t1 = hour1 * 60 * 60 + min1 * 60 + sec1; // подсчет первого времени секундах

    cout << "\n" << endl;

    cout << "second time (hours minutes seconds) " << endl;
    cin >> hour2 >> min2 >> sec2; // ввод второго времени
    t2 = hour2 * 60 * 60 + min2 * 60 + sec2; // подсчет второго времени в секундах

    cout << "\n" << endl;

    time = (t2 - t1); // вычисление разницы во времени в секундах
    ((time < 0) ? time *= -1 : (time > 0) ? time : 0); // модуль времени в секундах
    hour = time / (60 * 60); // нахождение разницы количества целых часов 
    time %= (60 * 60); // остаток от деления на часы
    min = time / 60; // нахождение разницы количества в целых минутах по остатку 
    time %= 60; // остаток от деления на минуты
    sec = time; // нахождение разницы количества в целых секундах по остатку

    cout << "time in between " << hour1 << ":" << min1 << ":" << sec1 << " and " << hour2 << ":" << min2 << ":" << sec2 << endl // вывод первого времени и второго времени
        << "is " << hour << " hours " << min << " minutes and " << sec << " seconds" << endl; // вывод разницы по времени в тех же единицах измерения
}