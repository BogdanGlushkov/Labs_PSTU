#include <cmath>
#include <iostream>
using namespace std;

int main()
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
}