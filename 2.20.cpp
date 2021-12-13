#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int i, co = 0;
    double a, n, z;
    cout << "Type n, z: ";
    cin >> n >> z;

    for (i = 1; i <= n; i++)
    {
        a = 0;        
        a = sin (n + n / i);
        ++co;
        a = round(a * 10) / 10;
        if (z == a) { cout << "A = Z, if A = " << a << " and there is a " << co << "-d"<< endl; }
        else { cout << "a" << co << " = " << a << endl; }
    }
}