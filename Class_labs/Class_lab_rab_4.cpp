//Базовый класс :
//ТРОЙКА_ЧИСЕЛ(TRIAD)
//Первое_число(first) - int
//Второе_число(second) – int
//Третье_число(third) - int
//Определить методы изменения полей и сравнения триады.

//Создать производный класс TIME с полями часы, минуты и секунды. Определить
//полный набор операций сравнения временных промежутков.

#include <iostream>

using namespace std;

class Triad
{
protected:
	int first;
	int second;
	int third;
public:
	Triad()
	{
		first = 0;
		second = 0;
		third = 0;
	}
	Triad(int f, int s, int t)
	{
		first = f;
		second = s;
		third = t;
	}
	Triad(const Triad& tmp)
	{
		first = tmp.first;
		second = tmp.second;
		third = tmp.third;
	}
	void setFirst(int f)
	{
		first = f;
	}
	void setSecond(int s)
	{
		second = s;
	}
	void setThird(int t)
	{
		third = t;
	}
	int getFirst() { return first; }
	int getSecond() { return second; }
	int getThird() { return third;  }

	int TriadCompare()
	{
		int max = first;
		if (second > max) { max = second; }
		if (third > max) { max = third; }
		return max;
	}



	Triad& operator=(const Triad& p)
	{
		if (&p == this) return *this;
		first = p.first;
		second = p.second;
		third = p.third;
		return *this;
	}
	Triad operator*(const Triad tmp)
	{
		first = first * tmp.first;
		second = second * tmp.second;
		third = third * tmp.third;
		return *this;
	}
	friend istream& operator>>(istream& in, Triad& tmp);
	friend ostream& operator<<(ostream& out, const Triad& tmp);
	virtual ~Triad()
	{
		//cout << "-Deleting Triad-" << endl << endl;
	}
};

istream& operator>>(istream& in, Triad& tmp)
{
	cout << "Type first number: "; in >> tmp.first;
	cout << "Type second number: "; in >> tmp.second;
	cout << "Type third number: "; in >> tmp.third;
	return in;
}

ostream& operator<<(ostream& out, const Triad& tmp)
{
	return (out << "(" << tmp.first << "," << tmp.second << "," << tmp.third << ")");
}

class Time : public Triad
{
public:
	Time()
	{
		first = 0;
		second = 0;
		third = 0;
	}
	Time(int f, int s, int t)
	{
		first = f;
		second = s;
		third = t;
	}
	Time(const Time& tmp)
	{
		first = tmp.first;
		second = tmp.second;
		third = tmp.third;
	}
	void setFirst(int f)
	{
		first = f;
	}
	void setSecond(int s)
	{
		second = s;
	}
	void setThird(int t)
	{
		third = t;
	}
	int getFirst() { return first; }
	int getSecond() { return second; }
	int getThird() { return third;  }

	void TimeStatic()
	{
		while (third > 60)
		{
			third -= 60;
			second += 1;
		}
		while (second > 60)
		{
			second -= 60;
			first += 1;
		}
	}

	int Compare()
	{
		int s;
		s = first * 360 + 60 * second + third;
		return s;
	}

	Time& operator=(const Time& p)
	{
		if (&p == this) return *this;
		first = p.first;
		second = p.second;
		third = p.third;
		return *this;
	}
	friend istream& operator>>(istream& in, Time& tmp);
	friend ostream& operator<<(ostream& out, const Time& tmp);
	~Time()
	{
		//cout << "-Deleting Time-" << endl << endl;
	}
};

istream& operator>>(istream& in, Time& tmp)
{
	cout << "Type hours: "; in >> tmp.first;
	cout << "Type minutes: "; in >> tmp.second;
	cout << "Type seconds: "; in >> tmp.third;
	return in;
}

ostream& operator<<(ostream& out, const Time& tmp)
{
	return (out << tmp.first << ":" <<  tmp.second << ":" << tmp.third);
}

int main()
{
	Triad a;
	cin >> a;
	cout << a << endl;

	cout << "The most higher number of triade is: " << a.TriadCompare() << endl;

	Triad b(34, 46, 58);
	cout << b << endl;
	cout << "-----" << endl;

	a = b;
	cout << a << endl;

	Time c;
	Time d;
	cin >> c;
	c.TimeStatic();
	cout << "First time: " << c << endl;
	cin >> d;
	d.TimeStatic();
	cout << "Second time: " << d << endl;
	if (c.Compare() > d.Compare())
	{
		cout << "First time: " << c << " is higher than second time: " << d << endl;
	}
	else
	{
		if (c.Compare() < d.Compare())
		{
			cout << "First time: " << c << " is lower than second time: " << d << endl;
		}
		else { cout << "First time: " << c << " eqiual to second time: " << d << endl; }
	}
}