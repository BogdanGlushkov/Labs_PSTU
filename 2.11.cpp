
#include <iostream>
using namespace std;

int main()
{
    int i, n, temp;
    bool f = false;
    cout << "Type the count of the numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "type number: ";
        cin >> temp;
        if (temp != 0)
        {
            f = true;
            break;
        }
    }
        if ((f = true) and (temp > 0)) 
        { 
            cout << "first type a positive ^_^ "; 
        }
        else 
            if ((f = true) and ( temp < 0))
            {
                cout << "first type a negative :c "; 
            }
        else 
            { 
                cout << " You not type a positive or negative number "; 
            }
}