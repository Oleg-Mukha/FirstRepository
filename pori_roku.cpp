﻿// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int selection;

	cout << "Введіть число відповідне номеру місяця (від 1 - до 12): ";

	cin >> selection;
	
	switch (selection)
	{
		case 1:
			cout << "Ви обрали зиму";
			break;
		case 2:
			cout << "Ви обрали зиму";
			break;
		case 3:
			cout << "Ви обрали зиму";
			break;
		case 4:
			cout << "Ви обрали весну";
			break;
		case 5:
			cout << "Ви обрали весну";
			break;
		case 6:
			cout << "Ви обрали весну";
			break;
		case 7:
			cout << "Ви обрали літо";
			break;
		case 8:
			cout << "Ви обрали літо";
			break;
		case 9:
			cout << "Ви обрали літо";
			break;
		case 10:
			cout << "Ви обрали осінь";
			break;
		case 11:
			cout << "Ви обрали осінь";
			break;
		case 12:
			cout << "Ви обрали осінь";
			break;
	}
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
