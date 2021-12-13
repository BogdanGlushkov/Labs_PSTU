
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

void task3_1()
{
    const int n = 11;  
    int arr[n] = { 48, 42, 22, 44, 33, 46, 47, 48, 49, 50, 51 };
    int temp; 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int j = 1; j < n; j++)
    {
        temp = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > temp)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void task3_2()
{
    const int n = 11;
    int arr[n] = { 1, 10, 65, 39, 48, 67, 47, 18, 90, 38, 11 };
    int temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


}

void task3_3()
{
    return;
}

void task3_4()
{
    int max;
    const int n = 11;
    int arr[n] = { 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51 };
    max = arr[0];

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Max el of mass is: " << max;
}
void task3_5()
{
    int max, count = 1;
    const int n = 11;
    int arr[n] = { 41, 52, 33, 44, 52, 51, 32, 44, 66, 66, 66 };
    max = arr[0];

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count = 1;
        }
        else if (arr[i] == max) { ++count; }
    }
    cout << "the max number is: " << max << endl
        << "There is a " << count << " numbers same that max. " << endl;
}

void task3_6()
{
    int max, min;
    const int n = 11;
    int arr[n] = { 41, 52, 33, 44, 52, 51, 32, 44, 66, 66, 75 };
    max = arr[0];
    min = arr[0];

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min) 
            min = arr[i];
    }
    cout << "The max number is: " << max << endl
        << "The min number is: " << min << endl;
}

void task3_7()
{
    bool flag = true;
    const int n = 11;
    int arr[n] = { 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51 };

    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
        if (arr[i] <= arr[i - 1])
        {
            flag = false;
        }
    }
    cout << endl;
    if (flag == true) { cout << "The massive is positive ^_^ "; }
    else { cout << "The massive isn't positive :c "; }
}

void task3_8()
{
    int tmp;
    const int n = 11;
    int arr[n] = { 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51 };

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n / 2; i++)
    {
        tmp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int option;
    cout << "Type tne number of resh 3.(Numbers: 1,2,3,4,5,6,7,8) " << endl;
    cin >> option;
    switch (option)
    {
    case 1: task3_1(); break;
    case 2: task3_2(); break;
    case 3: task3_3(); break;
    case 4: task3_4(); break;
    case 5: task3_5(); break;
    case 6: task3_6(); break;
    case 7: task3_7(); break;
    case 8: task3_8(); break;
    default: cout << "Option not found " << endl;
    }

}
