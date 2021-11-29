
#include <iostream>
#include <cmath>

using namespace std;

int main()
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
}
