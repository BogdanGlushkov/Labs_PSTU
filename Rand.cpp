
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string str, newstr;
    cout << "Type the string, please: ";
    getline(cin, str);
    str += "  ";
    char num[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    char lang[] =
    { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
        'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
            'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                'A', 'B', 'C', 'D', 'E', 'F', 'G',
                    'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                         'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };
    int a = 0, i = 0;
    bool TF = true;



    while (str[i] != '\0') {
        for (int j = 0; j < (sizeof(lang) / sizeof(lang[0])) && TF; j++)
        {
            if (str[i] == lang[j] || a != i)
            {
                TF = false;
            }
        }

        for (int j = 0; j < (sizeof(num) / sizeof(num[0])) && TF; j++)
        {
            if (str[i] == num[j] && a != i)
            {
                TF = false;
            }
        }

        if (TF) {
            while (str[a] != ' ')
            {
                str.erase(a, 1);
            }
            str.erase(a, 1);
            i = a;
        }
        else
        {
            i++;
        }

        if (str[i] == ' ')
        {
            a = i + 1;
        }
        TF = true;
    }
    cout << str;
}