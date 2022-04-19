//Поле first – дробное число х, координата точки, поле second – дробное число y,
//координата точки.Реализовать метод distance(double x1, doudle y1) – вычисление
//расстояния от точки с координатами(first, second) до точки с координатами(x1, y1).

#include <iostream>
#include <cmath>

using namespace std;

class dot
{
private:
	double x;
	double y;
	double x1;
	double y1;
public:
	void set(double x, double y, double x1, double y1)
	{
		this->x = x;
		this->y = y;
		this->x1 = x1;
		this->y1 = y1;
	}
	double distance()
	{
		double dist = 0;
		dist = sqrt(pow((x1-x),2)+pow((y1-y),2));
		return dist;
	}
};

int main()
{
	dot a;
	double x, y, x1, y1;
	cout << "Type coordinates (x & y) of first dot: " << endl;
	cin >> x;
	cin >> y;
	cout << "Type coordinates (x & y) of second dot: " << endl;
	cin >> x1;
	cin >> y1;
	a.set(x, y, x1, y1);
	cout << "Distance between F(" << x << "," << y << ") and S(" << x1 << "," << y1 << ") = " << a.distance();
	return 0;
}