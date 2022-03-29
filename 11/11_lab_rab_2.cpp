//Тип информационного поля char*.
//Добавить в список элементы с номерами 1, 3, 5 и т.д.

#include <iostream>

using namespace std;

struct Node
{
	char data;
	Node* ptr_prev = nullptr;
	Node* ptr_next = nullptr;
};

struct List
{
	Node* headNode = nullptr;
	Node* tailNode = nullptr;
};

void AddList(List& list, char& data)
{
	Node* newnode = new Node;
	newnode->data = data;
	if (list.headNode == nullptr)
	{
		list.headNode = newnode;
		list.tailNode = newnode;
		return;
	}
	Node* currentnode = list.headNode;
	newnode->ptr_prev = currentnode;
	if (currentnode->ptr_next != nullptr)
	{
		newnode->ptr_next = currentnode->ptr_next;
		currentnode->ptr_next->ptr_prev = newnode;
	}
	currentnode->ptr_next = newnode;
	list.tailNode = newnode;
}

void printList(List& list)
{
	Node* currentnode = list.headNode;
	while (currentnode != nullptr)
	{
		cout << currentnode->data << " ";
		currentnode = currentnode->ptr_next;
	}
}

void addList(List& list)
{
	Node* newnode = new Node;
	char data;
	int count = 1;
	Node* currentnode = list.headNode;
	while (currentnode != nullptr)
	{
		if (count % 2 != 0)
		{
			cin >> data;
			newnode->data = data;
			currentnode->data = newnode->data;
		}
		currentnode = currentnode->ptr_next;
		count++;
	}
}

int main()
{
	List list;
	int n;
	char tmp;
	cout << "Type size of the list: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> tmp;
		AddList(list, tmp);
	}
	cout << "Original list: " << endl;
	printList(list);
	cout << endl;
	addList(list);
	cout << "Final list" << endl;
	printList(list);
	return 0;
}