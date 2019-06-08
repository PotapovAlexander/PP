// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "time.h"

const int n = 10; 

void printTime(time Array[])
{
	for (int i = 0; i < n; i++) 
	{
		Array[i].print();
	}
}

int main()
{	
	time one; 
	one.setTime(11, 44);
	time two; 
	two.setTime(9, 17);
	time flag;
	flag = one + two;
	flag.print(); 
	flag = one - two;
	flag.print();
	flag = one * 2;
	flag.print();
	if (one < two)
		std::cout << "one<two = true" << std::endl;
	else std::cout << "one<two = false" << std::endl;
	if (one > two)
		std::cout << "one>two = true" << std::endl;
	else std::cout << "one>two = false" << std::endl;

	time array[n];
	for (int i = 0; i < n; i++) {
		array[i].setTime(std::rand() % 25, std::rand() % 61);
	}
	printTime(array);
	std::cout << std::endl;
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (array[j] < array[j + 1])
			{
				time temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	printTime(array);
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
