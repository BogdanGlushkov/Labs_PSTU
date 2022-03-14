//Тип информационного поля int.
//Удалить из списка все элементы с четными информационными полями.

#include "iostream"

struct Element {
	int value;
	Element* pNext;
}*head;

void AddItem(int m_val)
{
	Element* pElem = new Element;
	pElem->value = m_val;
	pElem->pNext = head;
	head = pElem;
}

void DeleteItems()
{
	Element* elem = head;
	Element* prev = NULL;

	while (elem)
	{
		if (elem->value % 2 == 0)
		{
			if (prev)
			{
				prev->pNext = elem->pNext;
				elem = elem->pNext;
				continue;
			}
			else
				head = elem->pNext;
		}
		prev = elem;
		elem = elem->pNext;
	}
}

void PrintList()
{
	Element* elem = head;
	while (elem)
	{
		printf("%d\n", elem->value);
		elem = elem->pNext;
	}
}

int main()
{
	for (int i = 0; i < 100; i++)
		AddItem(i);

	DeleteItems();
	PrintList();

	return 0;
}