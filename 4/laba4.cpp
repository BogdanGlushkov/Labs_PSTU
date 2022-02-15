//		1) Сформировать одномерный массив целых чисел, используя датчик случайных чисел.
//		2) Распечатать полученный массив.
//		3) Удалить первый элемент с заданным значением.
//		4) Сдвинуть массив циклически на К элементов вправо.
//		5) Распечатать полученный массив.

#include <iostream>
#include <ctime>

using namespace std;

void shift(int* a, int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        int tmp = a[n - 1];
        for (int j = n - 1; j > 0; j--)
            a[j] = a[j - 1];
        a[0] = tmp;
    }
}

int main()
{
    srand(time(0));

    int const S = 10;
    int mas1[S] = {};
    for (int i = 0; i < S; i++)
    {
        mas1[i] = rand() % 10;
    }

    for (int I = 0; I < S; I++)
    {
        cout << mas1[I] << " ";
    }

    int l;
    cout << "Type the l-number - it will be delete (seriosly): ";
    cin >> l;

    for (int i = 0; i < S; i++)
    {
        if (l == mas1[i])
        {
            for (int j = i; j < S - 1; j++)
            {
                mas1[j] = mas1[j + 1];
            }
            mas1[S - 1] = 0;
            break;
        }
    }


    int mas2[S - 1];

    for (int n = 0; n < S - 1; n++)
    {
        mas2[n] = mas1[n];
    }

    for (int I = 0; I < S - 1; I++)
    {
        cout << mas2[I] << " ";
    }

    int K;
    cout << "Type the K-number - it will push massive: ";
    cin >> K;

    shift(mas2, S - 1, K);

    for (int i = 0; i < S - 1; i++)
        cout << mas2[i] << ' ';
    cout << endl;
}