//Тип информационного поля char*.
//Добавить в список элементы с номерами 1, 3, 5 и т.д.

#include <iostream>

char lang[] =
{ '_', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
		'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
			'A', 'B', 'C', 'D', 'E', 'F', 'G',
				'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
					 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '$'
};

struct Element {
	char value;
	Element* pNext;
}*head;

void AddItem()
{
	Element* pElem = new Element;
	pElem->value = lang[rand()% 43];
	pElem->pNext = head;
	head = pElem;
}

void ChangeItems()
{
	Element* elem = head;
	Element* prev = NULL;

	while (elem)
	{
		if (elem->value % 2 == 1)
		{
			
		}
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
	
	for (int i = 1; i < 10; i++)
		AddItem();

	PrintList();

	ChangeItems();
	PrintList();

	return 0;
}