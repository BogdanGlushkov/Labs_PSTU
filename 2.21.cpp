
#include <iostream>
using namespace std;

int main()
{
    int n, prev;
    bool flag = true;

    cout << "type the number: ";
    cin >> n;
    if (n == 0) { cout << " Incorrect sequance :c "; return(32); }
    else { prev = n; }
    while (n != 0)
    {
        cout << "type the number: ";
        cin >> n;
        if (n == 0) { break; }
        
        if (prev < n) 
        {
            prev = n;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == true) { cout << "Sequance is goood ^_^ "; }
    else { cout << "Sequance is b@d :c"; }
}