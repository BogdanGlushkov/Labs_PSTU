
#include <iostream>
using namespace std;

void task1()
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
}

void task2()
{
    int Sum = 0, SumZ = 0, n, z;

    cout << "Type number n (the end of the progression): ";
    cin >> n ;

    cout << "Type z: ";
    cin >> z;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) { Sum += i; }
        else { Sum -= i; }
    }
    for (int i1 = 1; i1 <= n; i1++)
    {
        if (i1 % z == 0) {SumZ += i1;}
    }
    cout << "Sum = " << Sum << endl
        << "SumZ = " << SumZ << endl;
}

int main()
{
    int V;
    cout << "Type the variant of eqiual: 215 or 216 ";
    cin >> V;

    switch (V)
    {
        case 215: task1(); break;  
        case 216: task2(); break;
    }
    return 0;
}
