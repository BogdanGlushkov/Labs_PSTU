//Структура "Пациент":
//-фамилия, имя, отчество;
//-домашний адрес;
//-номер медицинской карты;
//-номер страхового полиса.
//Удалить элемент с заданным номером медицинской карты,
//добавить 2 элемента в начало файла.

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int DelMedId;

struct Pacient {
    string f, i, o, adress;
    int MedId, InsId;
    void read();

};
void Pacient::read()
{
    cout << "Type full name:\n";
    cin >> f;
    cout << "Type adress:\n";
    cin >> adress;
    cout << "Type num of medical id card:\n";
    cin >> MedId;
    cout << "Type num of insurance id card:\n";
    cin >> InsId;
    cout << endl;
 
}

vector<Pacient> DeleteSamMedId(const vector<Pacient>& ret)// если номер совпадает со введенным то
                                                        // не копируем в новый вектор
{
    vector<Pacient> result;
    bool flag;
    for (vector<Pacient>::size_type i = 0; i != ret.size(); i++) {
        flag = true;
        for (vector<Pacient>::size_type j = 0; j != ret.size(); j++) {
            if (ret[i].MedId == DelMedId && i != j)
                flag = false;

        }
        if (flag)
            result.push_back(ret[i]);
    }
    return result;
}
void insertstruct(vector<Pacient>& ret)
{
    vector<Pacient>::size_type i = 0;

        Pacient NewPacient;
        NewPacient.read();

        ret.insert(ret.begin() + i, NewPacient);
}

int main()
{   
    vector<Pacient> pacient, fin;
    Pacient lot;
    char yesno;

    while (1)
    {
        cout << "Add a pacient: type y\n";
        cin >> yesno;
        if (yesno == 'y')
        {
            lot.read();
            pacient.push_back(lot);
        }
        else
            break;
    }

    ofstream fileout1("PatienceAD.txt"); // создаем объект класса ifstream
    if (fileout1.is_open())
    {
        for (vector<Pacient>::size_type i = 0; i != pacient.size(); i++)
        {
            fileout1 << pacient[i].f << endl;
            fileout1 << pacient[i].adress << endl;
            fileout1 << pacient[i].MedId << endl;
            fileout1 << pacient[i].InsId << endl;
            fileout1 << "---------------------------" << endl;
        }
    }
    fileout1.close();

    cout << " Type the number of a Medical id card of a pacient do u want to delete: ";
    cin >> DelMedId;

    fin = DeleteSamMedId(pacient);

    insertstruct(fin);
    insertstruct(fin);

    ofstream fileout("PatienceFIN.txt"); // создаем объект класса ifstream
    if (fileout.is_open())
    {
        for (vector<Pacient>::size_type i = 0; i != fin.size(); i++)
        {
            fileout << fin[i].f << endl;
            fileout << fin[i].adress << endl;
            fileout << fin[i].MedId << endl;
            fileout << fin[i].InsId << endl;
            fileout << "---------------------------" << endl;
        }
    }

    fileout.close();

    return 0;
}