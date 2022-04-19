//Создать класс Money для работы с денежными суммами.Число должно быть
//представлено двумя полями : типа long для рублей и типа int для копеек.Дробная часть
//числа при выводе на экран должна быть отделена от целой части запятой.Реализовать :
//    * вычитание дробного числа из суммы
//    * операции сравнения(== , != ).

#include <iostream>
#include <cmath> 

using namespace std;

class Money
{
private:
	long rub;
	int cop;
public:
	Money()
	{
		rub = 0;
		cop = 0;
	}
	Money(long r, int c)
	{
		rub = r;
		cop = c;
	}
	Money(const Money& t)
	{
		rub = t.rub;
		cop = t.cop;
	}
	int getRub()
	{
		return rub;
	}
	int getCop()
	{
		return cop;
	}
	void setRub(long r)
	{
		rub = r;
	}
	void setCop(int c)
	{
		cop = c;
	}
	Money& operator=(const Money& t)
	{
		if (&t == this) {
			return *this;
		}
		rub = t.rub;
		cop = t.cop;
		return *this;
	}
	Money operator-(const Money& tmp);
	friend ostream& operator<<(ostream& out, const Money& tmp);
	friend void compare(const Money& tmp1, const Money& tmp2);
	~Money()
	{
		cout << "-Work of deconstructor-" << endl;
	}
};

Money Money::operator-(const Money& tmp)
{
	int sum1 = rub * 100 + cop;
	int sum2 = tmp.rub * 100 + tmp.cop;
	Money p;
	p.rub = abs(sum1 - sum2) / 100;
	p.cop = abs(sum1 - sum2) % 100;
	return p;
}

ostream& operator<<(ostream& out, const Money& tmp)
{
	return (out << tmp.rub << "," << tmp.cop);
}

void compare(const Money& tmp1, const Money& tmp2)
{
	int sum1 = tmp1.rub * 100 + tmp1.cop;
	int sum2 = tmp2.rub * 100 + tmp2.cop;
	if (sum1 == sum2)
	{
		cout << "Equals ^_^ " << endl;
	}
	else
	{
		cout << "Not Equals :c " << endl;
	}
}

int main()
{
	Money a(1023, 76);
	double p;
	double fraction;
	double k;   //new money
	cout << "Start Rub,Cop = " << a << endl;

	cout << "Type deductible Rub,Cop: " << endl;
	cin >> k;

	fraction = (modf(k, &p)*100);

	Money b(p, fraction);
	cout << "Deductible Rub,Cop = " << b << endl;
	cout << "startMoney - DeducMoney = " << a - b << endl << endl;
	cout << "---" << endl << "  Comparison summary: " << endl;
	compare(a, b);
	cout << "---" << endl;
	return 0;
}