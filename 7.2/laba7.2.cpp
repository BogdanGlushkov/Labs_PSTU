#include<iostream>
#include<stdarg.h>

using namespace std;

int min(int k, int first, ...)
{
    int* ptr = &first; // определяем укачатель k для перехода к другим ячейкам 
    int proverka;
    int MIN = 1000000000;
    for (int i = 0; i < k; i++, ptr++) // цикл для прохода проверки на квадраты чисел от 0 до k (проход k-раз)
    {
        proverka = *ptr; //присваиваю для проверки нахождения квадрата числа
        if (MIN > proverka) //(если) они равны, т.е мы нашли квадрат числа 
        {
            MIN = proverka;
        }
    }
    return MIN;
}


int main()
{
    cout << min(5, 1, 8, 14, 7689, 4) << endl;
    cout << min(10, 1, 14, 1, -18, 27, 28, 0, 8, 9, 50) << endl;
    cout << min(12, 65, 78, 345, 87, 34, -23, 89, 34, 45, 234, 768, 5) << endl;
    return 0;
}
