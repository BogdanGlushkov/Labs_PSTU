// Написать функцию для вычисления суммы элементов 
// квадратной матрицы, которые расположены ниже главной
// диагонали. С ее помощью найти максимальное значение
// такой суммы в n матрицах.

#include <iostream>
#include <stdlib.h>

using namespace std;

const int n = 5;
const int m = 5;

int summa(int a[][m])
{
    int i, j, s = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            if (i > j) s += a[i][j];
    return s;
}

int main() {
    int k, a[m][m], b = -10, c = 10, i, j, sum[n], max;
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < m; j++)
            {
                a[i][j] = rand() % (c - b + 1) + b;
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
        sum[k] = summa(a);
        cout << "Sum = " << sum[k] << endl;
    }
    max = sum[0];

    for (i = 1; i < n; i++)
        if (sum[i] > max) max = sum[i];
    cout << "Maximum sum equal = " << max << endl;

    return 0;
}