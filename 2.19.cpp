
#include <iostream>
#include <cmath>
using namespace std;

int main()
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
}

