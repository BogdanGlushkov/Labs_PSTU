
#include <string>
#include <iostream>

using namespace std;

int main()
{

    srand(time(0));

    string newstr[16];
    char lang[] =
    { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
        'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
            'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                'A', 'B', 'C', 'D', 'E', 'F', 'G',
                    'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                         'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                              '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
    };


        for (int i = 0; i < 16; i++)
        {
            newstr[i] = lang[(rand() % sizeof(lang))];
        }
        cout << "string: " << newstr;
        for (int i = 0; i < 16; i++)
        {
            newstr[i] = lang[(rand() % sizeof(lang))];
        }
        cout << newstr;
}