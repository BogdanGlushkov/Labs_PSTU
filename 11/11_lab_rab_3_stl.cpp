//Тип информационного поля int.
//Удалить из стека все элементы с четными информационными полями.

#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int> st)
{
	int num = st.size();
	for (int i = 0; i < num; i++)
	{
		cout << st.top() << " ";
		st.pop();
	}
}

int main()
{
	int size, k;
	cout << "Type a size of the stack: ";
	cin >> size;
	stack<int> stack1;
	for (int i = 0; i < size; i++)
	{
		cin >> k;
		stack1.push(k);
	}
	printStack(stack1);
	cout << endl;
	stack<int> stack2;
	int count = 1;
	for (int i = 0; i < size; i++)
	{
		if (count % 2 == 1)
		{
			stack2.push(stack1.top());
		}
		stack1.pop();
		count++;
	}
	int num2 = stack2.size();
	for (int i = 0; i < num2; i++)
	{
		cout << stack2.top() << " ";
		stack2.pop();
	}
	return 0;
}