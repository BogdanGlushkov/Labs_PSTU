#include <iostream>
#include <cmath>
using namespace std;

void reshcmath()
{
    int n;
    float S = 0, a = 0, x;
    
    cout << "Type x & n: ";
    cin >> x >> n;

    for (int i = 0; i <= n; i++)
    {
        if (i == 0) 
        {
            S += 1;
        }
        else
        {
            S += (pow(x, i) / i);
        }
    }
    cout << "S = " << S << endl;
}
void reshnocmath()
{
    int n;
    float S = 0, a = 0, x, ic;

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
}

int main()
{
    char O;

    cout << "Option: Withcmath, Notcmath - Type one." << endl;
    cin >> O;
    
    switch (O)
    {
        case 'W': reshcmath(); break;
        case 'N': reshnocmath(); break;
        default: cout << "Option not found" << endl;
    }
    return 0;
}