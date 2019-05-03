#include <iostream>
#include <string>
using namespace std;

/*
* Односвязный список
* Реализация
*/;


template <typename T>
class List //Шаблонный класс односвязного списка
{
public:

	List();
	~List();

	void push_back(T data); ;  
	void pop_front();         
	void clear();             

	void push_front(T data);         //Добавляет элемент в начало списка
	void pop_back();                 //удаляет элемент из конца списка
	void insert(T value, int index); 
	void removeAt(int index);        


	int GetSize() { return Size; };
	T& operator[](const int index);


private:

	template <typename T>
	class Node
	{
	public:

		Node* pNext;
		T data;


		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}

	};

	int Size; //Количество элементов в списке; 
	Node<T>* head;
};

template <typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template <typename T>
List<T>::~List()
{
	clear();
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}

		current->pNext = new Node<T>(data);

	}

	Size++;

}


template<typename T>
void List<T>::pop_front()
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}


template<typename T>
void List<T>::clear()
{
	while (Size)
	{
		pop_front();
	}
}


template<typename T>
void List<T>::push_front(T data)
{
	head = new Node <T>(data);
	Size++;
}

template<typename T>
void List<T>::pop_back()
{

}

template<typename T>
void List<T>::insert(T value, int index)
{
	if (index == 0)
	{
		push_front(value);
	}
	else
	{
		Node<T>* previous = this->head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}

		Node<T>* newNode = new Node<T>(value, previous->pNext);
		previous->pNext = newNode;

		Size++;
	}


}

template<typename T>
void List<T>::removeAt(int index)
{

	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node<T>* previous = this->head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}

		Node<T>* toDelete = previous->pNext;
		delete toDelete;
		Size--;

	}


}






template<typename T>
T& List<T>::operator[] (const int index)
{
	int counter = 0;
	Node<T>* current = this->head;

	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}

		current = current->pNext;
		counter++;
	}
}






int main()
{
	setlocale(LC_ALL, "ru");

	List<int> lst;

	cout << endl << "Элементов в списке " << lst.GetSize() << endl << " выполняю метод push_front() " << endl << endl;
	lst.push_front(5);
	cout << endl << "Элементов в списке " << lst.GetSize() << endl;
	cout << endl << "Insert " << endl << endl;
	lst.insert(99, 1);


	int NumberCount;
	cout << "Введите число:\n";
	cin >> NumberCount;

	for (int i = 0; i < NumberCount; i++)
	{
		lst.push_back(rand() % 10);
	}

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	cout << endl << "Элементов в списке " << lst.GetSize() << endl << " выполняю метод pop_front() " << endl << endl;

	lst.pop_front();

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}




	cout << endl << "Элементов в списке " << lst.GetSize() << endl << " выполняю метод  clear() " << endl << endl;
	lst.clear();

	cout << endl << "Элементов в списке " << lst.GetSize() << endl << endl;





}