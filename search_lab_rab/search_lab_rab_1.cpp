//Найти элемент N, вставить два элемента(любые числа) перед ним.

#include <iostream>
using namespace std;

int main() 
{
	int key;
	int tmp = 0, tmpN;
	const int n = 10;
	int M1[n] = {};
	int M2[n + 2] = {};

	cout << "Type numbers to fill the massive: ";
	for (int i = 0; i < n; i++) // type num of mass
	{
		cin >> tmp;
		M1[i] = tmp;
	}
	cout << endl;
	cout << "Filled massive: ";
	for (int i = 0; i < n; i++)
	{
		cout << M1[i];
	}
	cout << endl;
	cout << "Type a key for search: ";
	cin >> key;

	for (int i = 0; i < n; i++)
	{
		if (M1[i] == key)
		{
			tmpN = i;
			cout << i;
		}
	}

	for (int i = 0; i < tmpN; i++)
	{
		M2[i] = M1[i];
	}
	int temp1, temp2;
	cout << "Type 2 numbers: "
	cin >> temp1;
	cin >> temp2;

	M2[tmpN] = temp1;
	M2[tmpN+1] = temp2;

	for (int i = tmpN + 2; i < n + 2; i++)
	{
		M2[i] = M1[i-2];
	}

	for (int i = 0; i < n+2; i++)
	{
		cout << M2[i];
	}
}