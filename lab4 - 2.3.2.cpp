#include <iostream>
using namespace std; // ввод, вывод

int main()
{
    int n1, n2, n3, n4, n5; // объявление переменных под числа

    cout << "type five numbers: " << endl; // вывод сообщения о необходимости ввести 5 чисел
    cin >> n1 >> n2 >> n3 >> n4 >> n5; // ввод чисел

    cout << "the result is (" << n5 << ", " << n4 << ", " << n3 << ", " << n2 << ", " << n1 << ")" << endl; // вывод переменных(чисел) в обратном порядке
}