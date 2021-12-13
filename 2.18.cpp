
#include <iostream>
using namespace std;

int main()
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
}
