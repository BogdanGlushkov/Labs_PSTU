//1) Скопировать из файла F1 в файл F2 все строки, которые
//содержат только одно слово.
//2) Найти самое длинное слово в файле F2.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int max = 0;
    bool flag = false;
    string line, temp, maxstr;
    ofstream F2("F2.txt");
    ifstream F1("F1.txt"); // создаем объект класса ifstream
    if (F2.is_open())
        if (F1.is_open())
        {
            while (getline(F1, line))
            {
                flag = false;
                for (int i = 0; i < size(line); i++)
                {
                    if (line[i] == ' ' && line[i + 1] != ' ')
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag == false)
                {
                    F2 << line << endl;
                    if (size(line) > max)
                    {
                        max = size(line);
                        maxstr = line;

                    }
                }
            }
            F2 << "The lasrgest word is: " << maxstr;
        }
    F1.close();
    F2.close();
}