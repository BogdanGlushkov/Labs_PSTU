#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int M;
    int c = 0;

    int N, n1, i1, j1;
    int i2, j2, i3, j3;
    cout << ("Type n *: ");
    cin >> N;

    cout << "type a variant of square, by 1,2,3: ";
    cin >> M;
    switch (M)
    {
    case 1:
        n1 = sqrt(N);
        if (N != pow(n1, 2) or (n1 < 2)) {
            cout << " Just kill yourself ";
        }
        else
        {
            for (i1 = 1; i1 <= n1; i1++) {
                cout << endl;
                for (j1 = 1; j1 <= n1; j1++)
                {
                    cout << "* ";
                }
            }
        }
        cout << endl;
        break;

    case 2:
        if (N >= 2) {
            for (i2 = 1; i2 <= N; i2++) {
                cout << endl;
                for ( j2 = 1; j2 <= N; j2++)
                {
                    cout << "* ";
                }
            }
        }
        else
        {
            cout << ("Type are incorrect ^_^ ");
        }
        cout << endl;
        cout << endl;
        break;

    case 3:    
        if (N >= 3) {
            for ( i3 = 1; i3 <= N; i3++)
                for ( j3 = 1; j3 <= N; j3++)
                {
                    if ((i3 == 1) || (i3 == N) || (j3 == 1) || (j3 == N)) { cout << "* "; }
                    else { cout << "  "; }
                    if (j3 == N) {
                        cout << endl;
                    }
                }
        }
        else
        {
            cout << ("type are incorrect ^_^ ");
        }
          break;
    }
}
