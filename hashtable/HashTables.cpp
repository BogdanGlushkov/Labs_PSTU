    //ФИО, №телефона,
    //Адрес
    //H(k) = k mod M
    //Метод цепочек
    //адрес


#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <Windows.h>


using namespace std;
// Всех данных по 40 - штук
string names[50] = { "Денис","Владимир","Александр","Данил","Марк","Семён","Николай","Глеб","Владислав","Александр","Артемий","Егор","Никита","Лев","Александр","Максим","Алексей","Марк","Марк","Иван","Пётр","Лев","Степан","Тимофей","Арсений","Даниэль","Егор","Илья","Глеб","Марк","Иван","Кирилл","Владимир","Владислав","Степан","Егор","Николай","Дмитрий","Богдан","Егор", };
string patronymic[50] = { "Ильич","Матвеевич","Арсентьевич","Андреевич","Владимирович","Львович","Артурович","Александрович","Михайлович","Артёмович","Даниилович","Кириллович","Васильевич","Юрьевич","Дмитриевич","Фёдорович","Денисович","Альбертович","Даниилович","Евгеньевич","Иванович","Иванович","Дмитриевич","Филиппович","Львович","Александрович","Матвеевич","Георгиевич","Арсентьевич","Степанович","Львович","Максимович","Тимурович","Артёмович","Русланович","Дамирович","Александрович","Данилович","Викторович","Александрович", };
string surnames[50] = { "Аксенов","Худяков","Румянцев","Кулаков","Мухин","Егоров","Савин","Ковалев","Иванов","Дьяконов","Дубинин","Черкасов","Тимофеев","Куликов","Гаврилов","Морозов","Шмелев","Булатов","Филимонов","Малышев","Соколов","Кузнецов","Исаев","Козлов","Воронцов","Попов","Михайлов","Романов","Орлов","Герасимов","Зеленин","Григорьев","Иванов","Петров","Успенский","Нечаев","Павлов","Петров","Евсеев","Кочергин", };
string adress[50] = { "44.136.200.210","37.39.167.82","22.233.141.176","93.15.2.147","121.70.187.72","163.97.42.151","4.156.233.57","149.168.125.38","95.69.31.30","227.120.238.56","196.134.172.234","53.33.186.144","97.212.133.38","127.69.143.112","81.114.116.168","254.99.147.163","47.80.66.47","16.114.141.105","158.220.111.255","43.151.33.246","123.152.195.217","221.192.114.30","14.144.138.173","137.114.239.156","237.72.133.50","144.136.167.133","213.253.178.211","70.138.136.238","81.233.44.130","206.143.169.28","231.106.148.112","39.113.102.250","172.181.26.89","29.216.27.248","213.76.137.188","188.60.79.7","102.173.59.16","250.100.164.33","222.171.11.9","19.36.136.93", };
string phoneNumber[50] = { "89041050203","89049432297","89044881433","89044655267","89046359484","89043866839","89042746176","89043226890","89042657400","89048746149","89042303069","89049207113","89047921920","89040451845","89048648342","89046208342","89043422720","89047506056","89042175597","89042806227","89047075283","89044464033","89044070052","89043296561","89046989720","89046666008","89041661285","89041426139","89042880082","89045935921","89049721577","89041933221","89040951778","89046296406","89048853620","89041414729","89042590373","89049264338","89042358666","89040727025", };

struct Person
{
    Person()
    {
        full_name = "NULL";
        phoneNumber = "NULL";
        adress = "NULL";

    }

    string full_name;
    string phoneNumber;
    string adress;
};

int collisions_count = 0;

struct hash_table
{
    stack<Person>* array;
    hash_table(int size)
    {
        array = new stack<Person>[size];
    }

    ~hash_table()
    {
        delete[] array;
    }
    void add(Person temp, const int size);
    void find_index(string ip, const int size);
};

void show_info(const Person temp);
void show_hash_table(hash_table* object, const int size);
Person create_random_human();
string get_random_name(); string get_random_pasport(); string get_adress();
void print_array_humans(const Person* const array, const int size);
void fill_array_random_humans(Person* array, const int count);
int get_random_number();
int hash_function(string str, const int size);
void print_point(stack<Person> temp);
void add_point(Person x, stack<Person> temp);

void print_point(stack<Person> temp)
{

    while (!(temp.empty()))
    {
        show_info(temp.top());
        temp.pop();
    }
    cout << "\n";

}

void add_point(Person x, stack<Person> temp) {
    temp.push(x);
}

bool find_point(stack<Person> temp, string ip)
{
    while (!(temp.empty()))
    {
        if (temp.top().adress == ip) {
            return true;
        }
        temp.pop();
    }
    return false;
}


void hash_table::find_index(string ip, const int size)
{
    int hash = hash_function(ip, size);
    int index = hash;
    bool F = false;
    F = find_point(array[index], ip);
    if (index >= size)
    {
        cout << "Человека с адресом: \"" << ip << "\" нет. \n\n";
    }
    else
    {
        if (F)
        {
            cout << "Человек с адресом: \"" << ip << "\" содержится по индексу " << index << endl << endl;
        }
        else
        {
            cout << "Человека с адресом: \"" << ip << "\" нет. \n\n";
        }
    }
}

void hash_table::add(Person temp, const int size)
{
    int index = hash_function(temp.adress, size);
    int hash = index;
    if (!(array[index].empty()))
    {
        array[index].push(temp);
        return;
    }
    else
    {
        array[index].push(temp);
        collisions_count++;
        return;
    }
}



void show_hash_table(hash_table* table, const int size) {
    for (int i = 0; i < size; i++) {
        if (!(table->array[i].empty())) {
            print_point(table->array[i]);
        }
    }
}
int get_random_number()
{
    return rand() % 40; //кол данных в списке
}

int hash_function(string str, const int size)
{
    int a = 0;
    for (int i = 0; i < str.length(); i++) {
        a += (int)str[i];
    }
    int c = abs(a % size);
    return static_cast<int>(c);
}

int h = 1;
void show_info(const Person temp)
{
    cout << "Элемент " << h++ << endl;
    cout << "\nФИО         " << temp.full_name
        << "\n#Адрес      " << temp.adress
        << "\n#Паспорта   " << temp.phoneNumber << endl << endl;
}


void print_array_humans(const Person* const array, const int size)
{
    for (int i = 0; i < size; i++)
    {
        show_info(array[i]);
    }
}

void fill_array_random_humans(Person* array, const int count)
{
    for (int i = 0; i < count; i++)
    {
        array[i] = create_random_human();
    }
}

string get_random_pasport()
{
    return phoneNumber[get_random_number()];
}

string get_adress()
{
    return adress[get_random_number()];
}

Person create_random_human()
{
    Person temp;
    temp.full_name = get_random_name();
    temp.phoneNumber = get_random_pasport();
    temp.adress = get_adress();
    return temp;
}

string get_random_name()
{
    return(surnames[get_random_number()] + " " + names[get_random_number()] + " " + patronymic[get_random_number()]);
}
int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size;
    do {
        cout << "Enter the number of elements in the array (at least 10): ";
        cin >> size;
    } while (size < 10);
    cout << endl;
    Person* array = new Person[size];
    hash_table table(size);
    fill_array_random_humans(array, size);
    for (int i = 0; i < size; i++)
    {
        table.add(array[i], size);
    }
    show_hash_table(&table, size);

    string findIp;
    cout << "Введите адресс искомого человека: ";
    cin >> findIp;
    cout << endl << endl;
    table.find_index(findIp, size);

    cout << endl << endl << "================" << endl << endl;
    cout << endl << "Количество коллизий для " << size << "  записей: " << collisions_count << endl << endl;
    delete[] array;
    return 0;
}