//Тип информационного поля char* .
//Добавить в очередь элементы с номерами 1, 3, 5 и т.д

#include <iostream>

using namespace std;

template <typename T>
struct Node
{
	T data;
	Node<T>* next;
};

template <typename T>
struct Queue
{
	int size = 0;
	Node<T>* head = nullptr;
	Node<T>* tail = nullptr;
};

template <typename T>
void newQueue(Queue<T>& q, const int& n)
{
	T a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		pushQueue(q, a);
	}
}

template <typename T>
void pushQueue(Queue<T>& q, const T& data)
{
	if (q.head != nullptr)
	{
		Node<T>* newnode = new Node<T>;
		q.size++;
		newnode->data = data;
		newnode->next = nullptr;
		q.tail->next = newnode;
		q.tail = newnode;
	}
	else
	{
		Node<T>* newnode = new Node<T>;
		newnode->data = data;
		q.head = newnode;
		q.tail = newnode;
		q.size = 1;
	}
}

template <typename T>
void outQueue(Queue<T>& q)
{
	Node<T>* tmp = q.head;
	while (tmp != nullptr)
	{
		cout << tmp->data;
		tmp = tmp->next;
	}
}

template <typename T>
void popQueue(Queue<T>& q)
{
	Node<T>* tmp = q.head;
	q.head = q.head->next;
	q.size--;
	delete tmp;
}

template <typename T>
void changeQueue(Queue<T>& q, int& n)
{
	int count = 1;
	while (count <= n)
	{
		if (count % 2 != 0)
		{
			T a;
			cin >> a;
			pushQueue(q, a);
			popQueue(q);
		}
		else
		{
			pushQueue(q, q.head->data);
			popQueue(q);
		}
		count++;
	}
}

template <typename T>
void remQueue(Queue<T>& q)
{
	while (q.head != nullptr)
	{
		popQueue(q);
	}
}

int main()
{
	int n;
	char a;
	cout << "Type size of the Queue: ";
	cin >> n;
	cout << "Type values: ";
	Queue<char> queue;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		pushQueue(queue, a);
	}
	cout << "The original Queue: ";
	outQueue(queue);
	cout << endl;
	cout << "Type the changing values: " << endl;
	changeQueue(queue, n);
	cout << endl;
	cout << "The final Queue: ";
	outQueue(queue);
	remQueue(queue);
	return 0;
}