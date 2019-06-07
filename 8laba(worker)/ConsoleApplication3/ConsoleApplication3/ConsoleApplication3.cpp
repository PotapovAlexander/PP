// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "employee.h"
#include "department.h"


int main()
{
	Department depA, depB;
	depA.setName("DEVELOP"); depB.setName("ADMINISTRATORS");

	Idcard id1, id2, id3, id4;
	id1.setId(1);
	id2.setId(2);
	id3.setId(3);
	id4.setId(4);
	

	Employee  Andre, Mario, Petr;
	Mario.name = "Mario"; Petr.name = "Petr"; 
	Andre.name = "Andrea"; 

	Mario.setPosition("Chief");
	depA.setHead(&Mario);

	Andre.setPosition("Director");
	depB.setHead(&Andre);

	Petr.setPosition("Developer");
	
	Mario.setDepartment(&depA); Mario.setRoom(1); Mario.setIdCard(&id1);
	Petr.setDepartment(&depA); Petr.setRoom(2); Petr.setIdCard(&id3);
	

	
	
	Andre.setDepartment(&depB); Andre.setRoom(2); Andre.setIdCard(&id2);
	
	


	Mario.print(); 
	Petr.print(); 
	Andre.print();	

	depA.print();
	depB.print();

	system("PAUSE");
	return 0;
	
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
