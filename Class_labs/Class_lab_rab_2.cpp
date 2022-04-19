//Пользовательский класс СОТРУДНИК
//ФИО – string
//Должность – string
//Зарплата – double

#include <iostream>
#include <string>

using namespace std;

class Worker
{
private:
	string fsp;
	string job;
	double salary;
public:
	void set(string fsp, string job, double salary)
	{
		this->fsp = fsp;
		this->job = job;
		this->salary = salary;
	}
	void def()
	{
		fsp = "Alex J.J.";
		job = "Ingineer";
		salary = 2003;
	}
	void copy(const Worker& a)
	{
		fsp = a.fsp;
		job = a.job;
		salary = a.salary;
	}
	void print()
	{
		cout << "Name: " << fsp
			<< "\nPost on Job: " << job
			<< "\nSalary in month: " << salary << endl;
	}
	~Worker()
	{
		cout << "Work of Deconstruct" << endl;
	}
};

int main()
{
	Worker a, b, c;
	cout << "Constructor with parameters" << endl;
	a.set("Gilbert H.K.", "senior Q.A. ing", 1789);
	a.print();
	cout << endl;
	cout << "Constructor without parameters" << endl;
	b.def();
	b.print();
	cout << endl;
	cout << "Constructor Ctrl+C" << endl;
	c.copy(a);
	c.print();
	cout << endl;
	return 0;
}