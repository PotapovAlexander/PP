﻿// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "reader.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	kniga onek;
	onek.sname("Курс молодого бойца");
	onek.syear(1994);
	onek.ginfo();
	kniga twok;
	twok.sname("Законы РФ 2018: приказы и постановления");
	twok.syear(2018);
	twok.ginfo();
	

	reader oner, twor;
	oner.sage(18);
	oner.sreadmember("Иванов Иван Иванович");
	oner.skniga(onek);
	oner.ginfo();
	twor.sage(32);
	twor.sreadmember("Потапов Потап Потапович");
	twor.skniga(twok);
	twor.ginfo();

	
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
