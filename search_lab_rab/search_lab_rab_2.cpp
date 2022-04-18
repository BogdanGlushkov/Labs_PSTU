//Найти элемент N, вставить элемент K(любое число) после него.

#include <iostream>

using namespace std;

void Sort(int* a, int n)
{
	int d;
	int tmp;
	d = n / 2;
	while (d > 0)
	{
		for (int i = 0; i < n - d; i++)
		{
			int j = i;
			while (j >= 0 && a[j] > a[j + d])
			{
				tmp = a[j];
				a[j] = a[j + d];
				a[j + d] = tmp;
				j--;
			}
		}
		d = d / 2;
	}
}

int InterSearch(int* a, int n, int N)
{
	int left = 0;
	int right = n;
	int mid = 0;
	bool f = false;
	while ((left <= right) && !f)
	{
		mid = left + ((N - a[left]) * (right - left)) / (a[right] - a[left]);
		if (a[mid] < N)
		{
			left = mid + 1;
		}
		else if (a[mid] > N)
		{
			right = mid + 1;
		}
		else
		{
			f = true;
		}
	}
	if (a[left] == N)
	{
		return left;
	}
	else if (a[right] == N)
	{
		return right;
	}
	return -1;
}

int main()
{
	int n;
	cout << "Type a size of a massive: ";
	cin >> n;
	int* a = new int[n];
	int N, k, tmp1;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100 + 1;
	}
	Sort(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Type the number to add a new element after: ";
	cin >> N;
	cout << "Type the number you want to add: ";
	cin >> k;
	int ikey;
	ikey = InterSearch(a, n, N);
	if (ikey != -1)
	{
		++n;
			int tmp2;
			for (int i = ikey + 1; i <= n; i++)
			{
				if (i == ikey + 1)
				{
					tmp1 = a[i];
					a[i] = k;
				}
				else 
				{
					if (i<n)
					{
						tmp2 = tmp1;
						tmp1 = a[i];
						a[i] = tmp2;
					}
					else 
					{
						a[i] = tmp1;
					}
				}
			}
	}
	else
	{
		cout << "This number is not included to this massive :c " << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	delete a;
	return 0;
}