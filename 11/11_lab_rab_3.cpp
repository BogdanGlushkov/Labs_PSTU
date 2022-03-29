//Тип информационного поля int.
//Удалить из стека все элементы с четными информационными полями.

#include <iostream>

using namespace std;

template <typename T>
struct Node
{
	T data;
	Node<T>* next;
};

template <typename T>
struct Stack
{
	Node<T>* head = nullptr;
	int size = 0;
};

template <typename T>
void setNode(Node<T>& node, T data, Node<T>* next = null)
{
	node = new Node<T>;
	node->next = next;
	node->data = data;
}

template <typename T>
void pushStack(Stack<T>& tmp, const T& data)
{
	Node<T>* newnode = new Node<T>;
	newnode->next = tmp.head;
	newnode->data = data;
	tmp.head = newnode;
	tmp.size++;
}

template <typename T>
void popStack(Stack<T>& tmp)
{
	if (tmp.head != nullptr)
	{
		Node<T>* deleted = tmp.head;
		tmp.head = tmp.head->next;
		delete deleted;
		tmp.size--;
	}
}

template <typename T>
void outStack(Stack<T>& tmp)
{
	Node<T>* currentnode = tmp.head;
	while (currentnode != nullptr)
	{
		cout << currentnode->data << " ";
		currentnode = currentnode->next;
	}
}

int main()
{
	int n;
	int count = 1;
	cout << "Type size of the Stack: ";
	cin >> n;
	int k;
	Stack <int> st;
	Stack <int> st2;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		pushStack(st, k);
	}
	cout << "the original Stack: ";
	cout << endl;
	outStack(st);
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (count % 2 == 0)
		{
			pushStack(st2, st.head->data);
		}
		popStack(st);
		count++;
	}
	cout << "The final Stack: ";
	outStack(st2);
	return 0;
}