// Lab2_Kyzylova_ConsoleTask1_V11.cpp: определяет точку входа для консольного приложения.
//

/*
********************************************************************************
*Лабораторная работа № 2                                                       *
*Задача № 1                                                                    *
*                                                                              *
*Условие:                                                                      *
* Написать консольную программу с применением процедур и функций(с возможность *
* перегрузок подпрограмм), где были реализованы следующие условия:             *
* 1) Подпрограмма генерации динамического одномерного массива на заданное      *
* количество элементов.                                                        *
* 2) Подпрограммы сортировок методами: вставкой, выбором, пузырьком и          *
* с помощью бинарного дерева.                                                  *
* 3) Подпрограмма сохранения в текстовый файл отсортированного массива         *
* с указанным именем файла.                                                    *
* 4) Подпрограмма чтения данных из текстового файла с указанным именем файла.  *
* 5) Реализовать в программе пользовательское меню с использованием            *
* операторов выбора. Продумать пользовательский консольный интерфейс.          *
*                                                                              *
*Выполнила:                                                                    *
*Кызылова Полина Андреевна                                                     *
*Группа: ПКТб-20-1                                                             *
*                                                                              *
*Дата: 06.03.2021                                                              *
********************************************************************************
*/

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <vector>
#include <ctime>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Процедура приветствия, меню операций
void Hello()
{
	cout << "ЛАБОРАТОРНАЯ РАБОТА №2" << endl;
	cout << "================================================================" << endl;
    cout << "Меню возможных операций:" << endl;
	cout << "1 - Генерация динамического одномерного массива на заданное" << endl;
	cout << "количество элементов." << endl;
	cout << "2 - Сортировка массива методами: вставкой, выбором, пузырьком" << endl;
	cout << "и с помощью бинарного дерева." << endl;
	cout << "3 - Сохранение в текстовый файл отсортированного массива" << endl;
	cout << "с указанным именем файла." << endl;
	cout << "4 - Чтение данных из текстового файла с указанным именем файла." << endl;
	cout << "================================================================" << endl << endl;
}

// Процедура завершение программы
void Goodbye()
{
	cout << endl;
	cout << "================================================================" << endl;
	cout << "Лабораторную работу №2 выполнила Кызылова Полина Андреевна" << endl;
	cout << "================================================================" << endl << endl;
}

// Первая операция
void Task1()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (12)));

	cout << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "ГЕНЕРАЦИЯ МАССИВА" << endl << endl;

	int n;

	cout << "Введите размер массива: ";
	cin >> n;
	vector <int> mas(n);

	srand(time(0));

	cout << endl;
	cout << "Рандомный массив из " << n << " элементов:" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 100;
		cout << mas[i] << " ";
	}
	cout << endl;

	cout << "----------------------------------------------------------------" << endl << endl;
}

// Сортировка пузырьком
void Sort1()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (11)));

	cout << endl;
	cout << "BUBBLE SORT" << endl;

	int s;
	cout << "Введите размер массива: " << endl;
	cin >> s;

	vector <int> mass(s);

	srand(time(0));

	cout << endl;
	cout << "Рандомный массив из " << s << " элементов:" << endl;
	for (int i = 0; i < s; i++)
	{
		mass[i] = rand() % 100;
		cout << mass[i] << " ";
	}
	cout << endl;

	int k;
	for (int i = 0; i < s - 1; i++)
	{
		for (int j = 0; j < s - 1; j++)
		{
			if (mass[j] > mass[j + 1])
			{
				k = mass[j + 1];
				mass[j + 1] = mass[j];
				mass[j] = k;
			}
		}
	}

	cout << "Отсортированный массив:" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
	cout << endl;
}

// Сортировка вставкой
void Sort2()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (11)));

	cout << endl;
	cout << "INSERTION SORT" << endl;

	int g;
	cout << "Введите размер массива: " << endl;
	cin >> g;

	vector <int> arr(g);

	srand(time(0));

	cout << endl;
	cout << "Рандомный массив из " << g << " элементов:" << endl;
	for (int i = 0; i < g; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < g; i++)
	{
		int k = arr[i];
		int j = i - 1;

		while ((j >= 0) && (arr[j] > k))
		{
			arr[j + 1] = arr[j];
			arr[j] = k;

			j -= 1;
		}
	}
	cout << endl;

	cout << "Отсортированный массив:" << endl;
	for (int i = 0; i < g; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;
}

// Сортировка выбором
void Sort3()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (11)));

	cout << endl;
	cout << "SELECTION SORT" << endl;

	int g;
	cout << "Введите размер массива: " << endl;
	cin >> g;

	vector <int> arr(g);

	srand(time(0));

	cout << endl;
	cout << "Рандомный массив из " << g << " элементов:" << endl;
	for (int i = 0; i < g; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;

	int min;
	for (int i = 0; i < g - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < g; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
			if (arr[min] < arr[i])
			{
				int k = arr[i];
				arr[i] = arr[min];
				arr[min] = k;
			}
		}
	}
	cout << endl;

	cout << "Отсортированный массив:" << endl;
	for (int i = 0; i < g; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;
}

// Сортировка с помощью двоичного дерева
// Объявление структуры дерева
struct tree
{
	int a;
	struct tree *left;
	struct tree *right;
};

// Добавление узлов в дерево
struct tree *add_to_tree(tree *root, int x)
{
	if (root == NULL)
	{
		root = new tree;
		root->a = x;
		root->left = root->right = 0;
		return root;
	}
	if (root->a < x)
	{
		root->right = add_to_tree(root->right, x);
	}
	else
	{
		root->left = add_to_tree(root->left, x);
	}
	return root;
}

// Создание и заполнение массива
void tree_to_array(tree *root, int a[])
{
	static int max2 = 0;

	if (root == NULL) return;

	tree_to_array(root->left, a);
	a[max2++] = root->a;
	tree_to_array(root->right, a);
	free(root);
}

// Сортировка массива путем обхода узлов дерева
void sort_tree(int mas[], int y)
{
	tree *root;
	int i;

	root = NULL;
	for (i = 0; i < y; i++)
	{
		root = add_to_tree(root, mas[i]);
	}
	tree_to_array(root, mas);
}

// Вывод сортировки двоичным деревом
void Sort4()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (11)));

	cout << endl; 
	cout << "TREE SORT" << endl;

	srand(time(0));
	int n;

	cout << "Введите размер массива: " << endl;
	cin >> n;

	int mas[100];

	cout << endl;
	cout << "Рандомный массив из "<< n << " элементов:" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 100;
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "Отсортированный массив:" << endl;
	sort_tree(mas, n);
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << endl;
}

// Вторая операция
void Task2()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (10)));

	cout << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "СОРТИРОВКА МАССИВА РАЗЛИЧНЫМИ МЕТОДАМИ" << endl << endl;

	cout << "1 - Сортировка пузырьком" << endl;
	cout << "2 - Сортировка вставкой" << endl;
	cout << "3 - Сортировка выбором" << endl;
	cout << "4 - Сортировка с помощью бинарного дерева" << endl << endl;

	int r;
	cout << "Выберите метод сортировки: " << endl;
	cin >> r;
	cout << endl;

	// Обработка ощибки ввода
	while (r > 4) 
	{
		cout << "Неверное значение, попробуйте снова." << endl;
		cin >> r;
	}

	// Основная работа подпрограммы
	if (r <= 4)
	{
		switch (r)
		{
		case 1:
			Sort1();
			system("Pause");
			system("cls");
			break;
		case 2:
			Sort2();
			system("Pause");
			system("cls");
			break;
		case 3:
			Sort3();
			system("Pause");
			system("cls");
			break;
		case 4:
			Sort4();
			system("Pause");
			system("cls");
			break;
		default:;
		}
	}

	// Переход меню сортировок или выход
	while (r != 0)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)((0) | (13)));

		Hello();

		SetConsoleTextAttribute(hConsole, (WORD)((0) | (10)));

		cout << "Чтобы продолжить, выберите номер новой сортировки" << endl;
		cout << "1 - Сортировка пузырьком" << endl;
		cout << "2 - Сортировка вставкой" << endl;
		cout << "3 - Сортировка выбором" << endl;
		cout << "4 - Сортировка с помощью бинарного дерева" << endl << endl;

		cout << "Чтобы перейти к следующей операции из меню, нажмите 0" << endl;
		cin >> r;

		switch (r)
		{
		case 1:
			Sort1();
			system("Pause");
			system("cls");
			break;
		case 2:
			Sort2();
			system("Pause");
			system("cls");
			break;
		case 3:
			Sort3();
			system("Pause");
			system("cls");
			break;
		case 4:
			Sort4();
			system("Pause");
			system("cls");
			break;
		default:;
		}
	}
	
	cout << "----------------------------------------------------------------" << endl << endl;
}

// Третья операция
void Task3()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (9)));

	cout << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "СОХРАНЕНИЕ В ФАЙЛ ОТСОРТИРОВАННОГО МАССИВА" << endl << endl;

	int n;

	cout << "Введите размер массива: ";
	cin >> n;
	vector <int> mas(n);

	srand(time(0));

	cout << endl;
	cout << "Рандомный массив из " << n << " элементов:" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 100;
		cout << mas[i] << " ";
	}
	cout << endl << endl;

	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (mas[j]>mas[j+1])
			{
				int k = mas[j + 1];
				mas[j + 1] = mas[j];
				mas[j] = k;
			}
		}
	}

	ofstream fout("Result.txt");
	cout << "Отсортированный массив, записанный в файл Result" << endl;	
	fout << "Отсортированный массив:" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
		fout << mas[i] << " ";
	}
	cout << endl;
	fout << endl;

	fout.close();

	cout << "----------------------------------------------------------------" << endl << endl;
}

// Четвертая операция
void Task4()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (14)));

	cout << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "ЧТЕНИЕ ДАННЫХ ИЗ ТЕКСТОВОГО ФАЙЛА" << endl << endl;

	string s, d;
	cout << "Введите данные для записи в файл Resource:" << endl;
    cin >> d;

	getline(cin, s);
	
	ofstream fout("Resource.txt");
	fout << d << s << endl;
	fout.close();

	cout << endl;
	cout << "Данные из файла Resource:" << endl;

	char buff[80];

	ifstream fin("Resource.txt");
	if (fin.is_open())
	{
		fin >> buff;
		cout << buff;
		
		while (!fin.eof())
		{
			fin.getline(buff, 80);
			cout << buff;
		}
		fin.close();
		cout << endl;
	}
	
	cout << "----------------------------------------------------------------" << endl << endl;
}

// Тело программы
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD) ((0) | (13)));

	Hello();
	cout << "Введите номер операции: ";
	cin >> x;

	// Обрабока ошибки ввода
	while (x > 4)
	{
		SetConsoleTextAttribute(hConsole, (WORD)((0) | (13)));
		cout << "Неверное значение, попробуйте снова." << endl;
		cin >> x;
	}

	// Основная работа программы
	if (x <= 4)
	{
		switch (x)
		{
		case 1: 
			Task1();
			system("Pause");
			system("cls");
			break;
		case 2: 
			Task2();
			system("Pause");
			system("cls");
			break;
		case 3: 
			Task3();
			system("Pause");
			system("cls");
			break;
		case 4: 
			Task4();
			system("Pause");
			system("cls");
			break;
		default:;
		}
	}

	// Переход к основному меню или выход
	while(x != 0)
	{
		SetConsoleTextAttribute(hConsole, (WORD)((0) | (13)));

		Hello();

		cout << "Чтобы продолжить, выберите номер операции" << endl;
		cout << "Чтобы завершить сеанс, нажмите 0" << endl;
		cin >> x;

		while (x > 4)
		{
			cout << "Неверное значение, попробуйте снова." << endl;
			cin >> x;
		}
		
		switch (x)
		{
		case 1: 
			Task1();
			system("Pause");
			system("cls");
			break;
		case 2: 
			Task2();
			system("Pause");
			system("cls");
			break;
		case 3: 
			Task3();
			system("Pause");
			system("cls");
			break;
		case 4: 
			Task4();
			system("Pause");
			system("cls");
			break;
		default:;
		}
	}

	// Завершение программы
	Goodbye();

	system("Pause");
	return 0;
}
