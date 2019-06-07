// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "mage.h"
#include "spell.h"


int main()
{
	mage lina, lion; 
	lina.unit(1500, 200, "--Lina Inverse--");
	lion.unit(1000, 150, "--Lion the mage--"); 

	spell bolt = spell("Paletz", 200, 20);
	spell drain = spell("touch of death", 300, 50); 

	mage thisMage; 
	spell* thisSpell; 
	bool over = false; 

	thisMage = lina; 
	thisSpell = &bolt;
	while (!over)
	{
		if (thisMage.getName() == "--Lina Inverse--")
		{
			if (thisMage.cast(*thisSpell, lion) != 0)
			{
				thisMage = lion;
				if (thisSpell == &bolt)
					thisSpell = &drain;
				else
					thisSpell = &bolt;
			}
			else
			{
				thisMage.say("i'm lose mana is null");
				over = true;
			}
		}
		else
		{
			if (thisMage.cast(*thisSpell, lina) != 0)
			{
				thisMage = lina;
			}
			else 
			{
				thisMage.say("i'm lose mana is null");
				over = true;
			}

		}
	}	
	system("PAUSE");

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
