// Class_Templates.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <time.h>
#include <typeinfo>
using namespace std;

template<class T>
class Array {
	T* array;
	int size;
	void setValue(T& value) {
		cout << typeid(value).name() << ": ";
		cin >> value;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "error" << endl;

			cout << typeid(value).name() << ": ";
			cin >> value;
		}
		string endLine;
		getline(cin, endLine);
	}
public:
	Array(int size) :array{ new T[size] }, size{ size } {}
	Array() :Array(5) {}
	Array(const Array& array) {
		this->size = array.size;
		this->array = new T[size];
		for (size_t i = 0; i < size; i++)
		{
			this->array[i] = array.array[i];
		}
	}
	int getSize() {
		return size;
	}
	void setArray() {
		for (size_t i = 0; i < size; i++)
		{
			setValue(array[i]);
		}
	}
	void display() {
		for (size_t i = 0; i < size; i++)
		{
			cout << array[i] << ", ";
		}cout << endl;
	}
	friend ostream& operator<< (ostream& ost, Array& array) {
		for (size_t i = 0; i < array.size; i++)
		{
			ost << array.array[i] << ", ";
		}ost << endl;
		return ost;
	}
	void sort() {
		for (size_t i = size - 1; i > 0; i--)
		{
			for (int j = 0; j < i; j++) {
				if (array[j] > array[j + 1]) {
					swap(array[j], array[j + 1]);
				}
			}
		}
	}
};

int main()
{
	srand(time(NULL));
	Array<int> array(4);
	array.setArray();
	array.display();
	array.sort();
	array.display();
	Array<string> array2(4);
	array2.setArray();
	array2.display();
	array2.sort();
	array2.display();
	Array<string> array3{ array2 };
	array3.display();
	cout << array3;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
