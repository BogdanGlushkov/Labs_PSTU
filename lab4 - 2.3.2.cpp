#include <iostream>
using namespace std; // ввод, вывод

int main()
{
    string n1, n2, n3, n4, n5; // объявление переменных под символы

    cout << "type five symbols: " << endl; // вывод сообщения о необходимости ввести 5 чисел
    cin >> n1 >> n2 >> n3 >> n4 >> n5; // ввод символов

    cout << "the result is (" << n5 << ", " << n4 << ", " << n3 << ", " << n2 << ", " << n1 << ")" << endl; // вывод переменных(символов) в обратном порядке
}
