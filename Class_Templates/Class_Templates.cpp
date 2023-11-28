﻿// Class_Templates.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

template <class T>
T square(T number) {
	T result = number * number;
	return result;
}
template <class T>
void sort(T array, size_t size) {
	for (size_t i = size-1; i > 0; i--)
	{
		for (int j = 0; j < i; j++) {
			if (array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
			}
		}
	}
}
template <class T>
void display(T array[], size_t size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << ", ";
	}cout << endl;
}

int main()
{
	const int i = 5;
	size_t j = 5;
	int m[i]{ 3,6,5,2,1 };
	double m2[i]{ 7.5, 5.3, 5.3, 4, 5.2 };
	string str[]{"one", "two", "three"};
	display(m, j);
	sort(m, 5);
	display(m, j);
	display(str, 3);
	sort(str, 3);
	display(str, 3);
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
