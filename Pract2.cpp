
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void task2_3()
{
    int S = 0, a = 1;
    int n, i;
    cout << "Type n : ";
    cin >> n;

    for (i = 2; i <= n; i++)
    {
        a *= i;
        S += a;
    }
    cout << "If n = " << n << " then " << "S = " << S << endl;
    return;
}

void task2_4()
{
    int n;
    cin >> n;
    int spaces = n / 2;
    int stars = 1;
    if ((n > 3) and (n % 2 != 0)) {
        for (int i = 1; i <= (n + 1) / 2; i++) {
            for (int j = 1; j <= spaces; j++) {
                cout << " ";
            }
            spaces--;
            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }
            stars += 2;
            cout << endl;
        }
    }
    return;

}

void task2_5()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return;
}

void task2_6()
{
    int n;
    setlocale(LC_ALL, "Rus");
    cin >> n;
    if (n > 2) {
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = i; j <= n - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else {
        cout << "Введённое число меньше 2";
    }
    return;
}
void task2_7()
{
    {
        char M;
        int c = 0;

        int N, n1, i1, j1;
        int i2, j2, i3, j3;
        cout << ("Type n *: ");
        cin >> N;

        cout << "Type a variant of square, by a,b,c: ";
        cin >> M;
        switch (M)
        {
        case 'a':
            n1 = sqrt(N);
            if (N != pow(n1, 2) or (n1 < 2)) {
                cout << " Just kill yourself ";
            }
            else
            {
                for (i1 = 1; i1 <= n1; i1++) {
                    cout << endl;
                    for (j1 = 1; j1 <= n1; j1++)
                    {
                        cout << "* ";
                    }
                }
            }
            cout << endl;
            break;

        case 'b':
            if (N >= 2) {
                for (i2 = 1; i2 <= N; i2++) {
                    cout << endl;
                    for (j2 = 1; j2 <= N; j2++)
                    {
                        cout << "* ";
                    }
                }
            }
            else
            {
                cout << ("Type are incorrect ^_^ ");
            }
            cout << endl;
            cout << endl;
            break;

        case 'c':
            if (N >= 3) {
                for (i3 = 1; i3 <= N; i3++)
                    for (j3 = 1; j3 <= N; j3++)
                    {
                        if ((i3 == 1) || (i3 == N) || (j3 == 1) || (j3 == N)) { cout << "* "; }
                        else { cout << "  "; }
                        if (j3 == N) {
                            cout << endl;
                        }
                    }
            }
            else
            {
                cout << ("Type are incorrect ^_^ ");
            }
            break;
        }
    }
    return;
}

void task2_8()
{
    int max, n, temp;
    cout << "Type the count of input numbers: ";
    cin >> n;

    cout << "Type number: ";
    cin >> max;

    for (int i = 2; i <= n; i++)
    {
        cout << "Type number: ";
        cin >> temp;
        if (temp > max)
        {
            max = temp;
        }
    }
    cout << "The max number of inputted is: " << max << endl;
    return;
}

void task2_9()
{}

void task2_10()
{
    int max, n, temp;
    cout << "Type the count of input numbers: ";
    cin >> n;

    cout << "Type number: ";
    cin >> max;

    for (int i = 2; i <= n; i++)
    {
        cout << "Type number: ";
        cin >> temp;
        if (temp > max)
        {
            max = temp;
        }
    }
    cout << "The max number of inputted is: " << max << endl;
    return;
}

void task2_11()
{
    int i, n, temp = -1;
    bool f = false;
    cout << "Type the count of the numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Type number: ";
        cin >> temp;
        if (temp != 0)
        {
            f = true;
            break;
        }
    }
    if ((f == true) and (temp > 0))
    {
        cout << "First type a positive ^_^ ";
    }
    else
        if ((f == true) and (temp < 0))
        {
            cout << "First type a negative :c ";
        }
        else
        {
            cout << " You not type a positive or negative number ";
        }
    return;
}

void task2_12()
{
    int N, max, min, t;
    cout << "type a N. N - how much numbers in progression: ";
    cin >> N;

    cout << "type a number: ";
    cin >> min;

    max = min;
    for (int i = 1; i < N; i++)
    {
        cout << "type a number: ";
        cin >> t;
        if (t > max) { max = t; }
        if (t < min) { min = t; }
    }
    cout << min << " + " << max << " = " << min + max << endl;
    return;
}

void task2_13()
{
    int D, t;
    float x1, x2;
    float a, b, c;
    cout << "Type a, b, c: ";
    cin >> a >> b >> c;

    D = (pow(b, 2) - 4 * a * c);
    if (D > 0)
    {
        x1 = (((-b) + sqrt(D)) / (2 * a));
        x2 = (((-b) - sqrt(D)) / (2 * a));
        cout << "x1 = " << x1 << endl
            << "x2 = " << x2 << endl;
    }
    else
    {
        if (D == 0)
        {
            x1 = ((-b) / (2 * a));
            cout << "x1 = " << x1 << endl;
        }

        else
        {
            cout << "there is no X. ";
        }
    }
    return;
}

void task2_14()
{
    int N;
    int Sum = 0;
    cout << "Type random number: ";
    cin >> N;

    while (N > 0)
    {
        Sum += N % 10;
        N /= 10;
    }
    cout << "Summary dignits of number is: " << Sum << endl;
    return;
}

void task2_15()
{
    int N, z, t;
    cout << "Type random number N , and Z (N, z): ";
    cin >> N >> z;

    while (N > 0)
    {
        t = N % 10;
        N /= 10;
        if (t == z)
        {
            cout << "Yes ";
            break;
        }
    }
    if (t != z) {
        cout << "No";
    }
    return;
}

void task2_16()
{
    int Sum = 0, SumZ = 0, n, z;

    cout << "Type number n (the end of the progression): ";
    cin >> n;

    cout << "Type z: ";
    cin >> z;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) { Sum += i; }
        else { Sum -= i; }
    }
    for (int i1 = 1; i1 <= n; i1++)
    {
        if (i1 % z == 0) { SumZ += i1; }
    }
    cout << "Sum = " << Sum << endl
        << "SumZ = " << SumZ << endl;
    return;
}

void task2_17()
{
    char O;

    cout << "Option: Withcmath, Notcmath - Type one." << endl;
    cin >> O;

    switch (O)
    {
    case 'W':
    {
        int n;
        float Sum = 0, x;

        cout << "Type x & n: ";
        cin >> x >> n;

        for (int i = 0; i <= n; i++)
        {
            if (i == 0)
            {
                Sum += 1;
            }
            else
            {
                Sum += (pow(x, i) / i);
            }
        }
        cout << "S = " << Sum << endl;
        break;
    }
    case 'N':
    {
        int n;
        float S = 0, x, ic;

        cout << "Type x & n: ";
        cin >> x >> n;

        for (int i = 0; i <= n; i++)
        {
            int x1 = 1;
            if (i == 0)
            {
                S += 1;
            }
            else
            {
                for (int i1 = 1; i1 <= i; i1++)
                {
                    x1 *= x;
                    ic = i1;
                }
                S += (x1 / ic);
            }
        }
        cout << "S = " << S;
        break;
    }
    default: {cout << "Option not found " << endl; }
    }
    return;
}

void task2_18()
{
    int n, newn = 0;
    cout << "type random number - ";
    cin >> n;
    while (n != 0)
    {
        newn *= 10;
        newn += n % 10;
        n /= 10;
    }
    cout << "Result is: " << newn;
    return;
}

void task2_19()
{
    int Sum = 0, n, i, s = 1;

    cin >> n;
    cout << "type n - count of sequence: ";

    for (i = 1; i <= n; i++)
    {
        if (i == pow(3, s))
        {
            Sum -= i;
            ++s;
        }
        else
        {
            Sum += i;
        }
    }
    cout << "Equals = " << Sum;
    return;
}

void task2_20()
{
    int i, co = 0;
    double a, n, z;
    cout << "Type n, z: ";
    cin >> n >> z;

    for (i = 1; i <= n; i++)
    {
        a = 0;
        a = sin(n + n / i);
        ++co;
        a = round(a * 10) / 10;
        if (z == a) { cout << "A = Z, if A = " << a << " and there is a " << co << "-d" << endl; }
        else { cout << "a" << co << " = " << a << endl; }
    }
    return;
}

void task2_21()
{
    int n, prev;
    bool flag = true;

    cout << "type the number: ";
    cin >> n;
    if (n == 0) { cout << " Incorrect sequance :c "; return; }
    else { prev = n; }
    while (n != 0)
    {
        cout << "type the number: ";
        cin >> n;
        if (n == 0) { break; }

        if (prev < n)
        {
            prev = n;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == true) { cout << "Sequance is goood ^_^ "; }
    else { cout << "Sequance is b@d :c"; }
    return;
}

void task2_22()
{
    float n, max = -1;
    int count = 0, firstmax = 0, endmax = 0;
    cout << "Type N - ";
    cin >> n;

    for (float i = 1; i <= n; i++)
    {
        if ((round(sin(n + (i / n))) * 10 / 10) > max)
        {
            max = (round(sin(n + (i / n))) * 10 / 10);
            firstmax = i;
        }
        else
            if ((round(sin(n + (i / n))) * 10 / 10) == max)
            {
                endmax = i;
            }
    }
    cout << "Max = " << max << endl
        << "The first max is " << firstmax << " element " << endl
        << "The last max is " << endmax << " element " << endl;
    return;
}

void task2_23()
{}


int main()
{
    int option;
    cout << "Type tne number of resh 2_... " << endl
        << "Valuable numbers: 3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23. " << endl;
    cin >> option;
    switch (option)
    {
    case 3: task2_3(); break;
    case 4: task2_4(); break;
    case 5: task2_5(); break;
    case 6: task2_6(); break;
    case 7: task2_7(); break;
    case 8: task2_8(); break;
    case 9: task2_9(); break;
    case 10: task2_10(); break;
    case 11: task2_11(); break;
    case 12: task2_12(); break;
    case 13: task2_13(); break;
    case 14: task2_14(); break;
    case 15: task2_15(); break;
    case 16: task2_16(); break;
    case 17: task2_17(); break;
    case 18: task2_18(); break;
    case 19: task2_19(); break;
    case 20: task2_20(); break;
    case 21: task2_21(); break;
    case 22: task2_22(); break;
    case 23: task2_23(); break;
    default: cout << "Option not found " << endl;
    }

}