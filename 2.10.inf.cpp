
#include <iostream>
using namespace std;

int main()
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
    cout << "the max number of inputted is: " << max << endl;
}

