
#include <iostream>

using namespace std;

int i, j, n, d;
void swap(int arr[], int pos1, int pos2) {
	int temp;
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}

int partition(int arr[], int low, int high, int pivot) {
	int i = low;
	int j = low;
	while (i <= high) {
		if (arr[i] > pivot) {
			i++;
		}
		else {
			swap(arr, i, j);
			i++;
			j++;
		}
	}
	return j - 1;
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pivot = arr[high];
		int pos = partition(arr, low, high, pivot);

		quickSort(arr, low, pos - 1);
		quickSort(arr, pos + 1, high);
	}
}

void Shell(int A[], int n) //сортировка Шелла
{
	int temp = 0;
	d = n;
	d = d / 2;
	while (d > 0)
	{
		for (i = 0; i < n - d; i++)
		{
			j = i;
			while (j >= 0 && A[j] > A[j + d])
			{
				temp = A[j];
				A[j] = A[j + d];
				A[j + d] = temp;
				j--;
			}
		}
		d = d / 2;
	}
	for (i = 0; i < n; i++) cout << A[i] << " "; //вывод массива
}

int main()
{
	char C;
	int const n = 11;
	cout << "Type the variant of sort (Q)uick||Hora or (S)hell: ";
	cin >> C;
	switch (C)
	{
		case 'Q':
		{
			int arr[n];
			for (int i = 0; i < n; i++)
			{
				arr[i] = rand() % 20 + 1;
			}
			quickSort(arr, 0, n - 1);
			cout << "The sorted array is: ";
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << " ";
			}
			break;
		}
		case 'S':
		{
			int* A = new int[n]; //объявление динамического массиваt
			for (i = 0; i < n; i++) //ввод массива
			{
				A[i] = rand() % 20 + 1;
			}
			cout << "Massive in the end: ";
			Shell(A, n);
			delete[] A; //освобождение памяти}
		}
		break;
	} 
	return(0);
}
