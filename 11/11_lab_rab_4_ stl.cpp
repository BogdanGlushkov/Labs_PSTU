//Тип информационного поля char* .
//Добавить в очередь элементы с номерами 1, 3, 5 и т.д

#include <iostream>
#include <queue>

using namespace std;

void printQueue(queue<char> q)
{
	int num = q.size();
	for (int i = 0; i < num; i++)
	{
		cout << q.front();
		q.pop();
	}
}

void changeQueue(queue<char>& q, int& n)
{
	int count = 1;
	while (count <= n)
	{
		if (count % 2 != 0)
		{
			char symb;
			cin >> symb;
			q.push(symb);
			q.pop();
		}
		else
		{
			q.push(q.front());
			q.pop();
		}
		count++;
	}
}

int main()
{
	int n;
	char symb;
	cout << "Type a size of the queue: ";
	cin >> n;
	queue<char> queue;
	for (int i = 0; i < n; i++)
	{
		cin >> symb;
		queue.push(symb);
	}
	printQueue(queue);
	cout << endl;
	changeQueue(queue, n);
	cout << endl;
	printQueue(queue);
	return 0;
}
