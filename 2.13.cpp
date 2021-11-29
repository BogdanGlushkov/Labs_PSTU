#include <cmath>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
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
}
