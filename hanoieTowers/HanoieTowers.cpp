
#include <iostream>
using namespace std;

void hanoie(int m, int a, int b, int c)
{
    if (m == 0) return;
    hanoie(m - 1, a, c, b);

    cout << a << " -> " << b << endl;

    hanoie(m - 1, c, b, a);
}

int main()
{
    int n, s1 = 1, s2 = 2, s3 = 3;

    cout << "Type the number of disks: ";
    cin >> n;  //необходимо переместить n дисков с 1 на 3 колышек, используя второй
    
    hanoie(n, s1, s2, s3);
    return(0);
}
