// Lab2_Kyzylova_ConsoleTask1_V11.cpp: ���������� ����� ����� ��� ����������� ����������.
//

/*
********************************************************************************
*������������ ������ � 2                                                       *
*������ � 1                                                                    *
*                                                                              *
*�������:                                                                      *
* �������� ���������� ��������� � ����������� �������� � �������(� ����������� *
* ���������� �����������), ��� ���� ����������� ��������� �������:             *
* 1) ������������ ��������� ������������� ����������� ������� �� ��������      *
* ���������� ���������.                                                        *
* 2) ������������ ���������� ��������: ��������, �������, ��������� �          *
* � ������� ��������� ������.                                                  *
* 3) ������������ ���������� � ��������� ���� ���������������� �������         *
* � ��������� ������ �����.                                                    *
* 4) ������������ ������ ������ �� ���������� ����� � ��������� ������ �����.  *
* 5) ����������� � ��������� ���������������� ���� � ��������������            *
* ���������� ������. ��������� ���������������� ���������� ���������.          *
*                                                                              *
*���������:                                                                    *
*�������� ������ ���������                                                     *
*������: ����-20-1                                                             *
*                                                                              *
*����: 06.03.2021                                                              *
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

// ��������� �����������, ���� ��������
void Hello()
{
	cout << "������������ ������ �2" << endl;
	cout << "================================================================" << endl;
    cout << "���� ��������� ��������:" << endl;
	cout << "1 - ��������� ������������� ����������� ������� �� ��������" << endl;
	cout << "���������� ���������." << endl;
	cout << "2 - ���������� ������� ��������: ��������, �������, ���������" << endl;
	cout << "� � ������� ��������� ������." << endl;
	cout << "3 - ���������� � ��������� ���� ���������������� �������" << endl;
	cout << "� ��������� ������ �����." << endl;
	cout << "4 - ������ ������ �� ���������� ����� � ��������� ������ �����." << endl;
	cout << "================================================================" << endl << endl;
}

// ��������� ���������� ���������
void Goodbye()
{
	cout << endl;
	cout << "================================================================" << endl;
	cout << "������������ ������ �2 ��������� �������� ������ ���������" << endl;
	cout << "================================================================" << endl << endl;
}

// ������ ��������
void Task1()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (12)));

	cout << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "��������� �������" << endl << endl;

	int n;

	cout << "������� ������ �������: ";
	cin >> n;
	vector <int> mas(n);

	srand(time(0));

	cout << endl;
	cout << "��������� ������ �� " << n << " ���������:" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 100;
		cout << mas[i] << " ";
	}
	cout << endl;

	cout << "----------------------------------------------------------------" << endl << endl;
}

// ���������� ���������
void Sort1()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (11)));

	cout << endl;
	cout << "BUBBLE SORT" << endl;

	int s;
	cout << "������� ������ �������: " << endl;
	cin >> s;

	vector <int> mass(s);

	srand(time(0));

	cout << endl;
	cout << "��������� ������ �� " << s << " ���������:" << endl;
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

	cout << "��������������� ������:" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
	cout << endl;
}

// ���������� ��������
void Sort2()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (11)));

	cout << endl;
	cout << "INSERTION SORT" << endl;

	int g;
	cout << "������� ������ �������: " << endl;
	cin >> g;

	vector <int> arr(g);

	srand(time(0));

	cout << endl;
	cout << "��������� ������ �� " << g << " ���������:" << endl;
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

	cout << "��������������� ������:" << endl;
	for (int i = 0; i < g; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;
}

// ���������� �������
void Sort3()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (11)));

	cout << endl;
	cout << "SELECTION SORT" << endl;

	int g;
	cout << "������� ������ �������: " << endl;
	cin >> g;

	vector <int> arr(g);

	srand(time(0));

	cout << endl;
	cout << "��������� ������ �� " << g << " ���������:" << endl;
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

	cout << "��������������� ������:" << endl;
	for (int i = 0; i < g; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;
}

// ���������� � ������� ��������� ������
// ���������� ��������� ������
struct tree
{
	int a;
	struct tree *left;
	struct tree *right;
};

// ���������� ����� � ������
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

// �������� � ���������� �������
void tree_to_array(tree *root, int a[])
{
	static int max2 = 0;

	if (root == NULL) return;

	tree_to_array(root->left, a);
	a[max2++] = root->a;
	tree_to_array(root->right, a);
	free(root);
}

// ���������� ������� ����� ������ ����� ������
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

// ����� ���������� �������� �������
void Sort4()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (11)));

	cout << endl; 
	cout << "TREE SORT" << endl;

	srand(time(0));
	int n;

	cout << "������� ������ �������: " << endl;
	cin >> n;

	int mas[100];

	cout << endl;
	cout << "��������� ������ �� "<< n << " ���������:" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 100;
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "��������������� ������:" << endl;
	sort_tree(mas, n);
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << endl;
}

// ������ ��������
void Task2()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (10)));

	cout << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "���������� ������� ���������� ��������" << endl << endl;

	cout << "1 - ���������� ���������" << endl;
	cout << "2 - ���������� ��������" << endl;
	cout << "3 - ���������� �������" << endl;
	cout << "4 - ���������� � ������� ��������� ������" << endl << endl;

	int r;
	cout << "�������� ����� ����������: " << endl;
	cin >> r;
	cout << endl;

	// ��������� ������ �����
	while (r > 4) 
	{
		cout << "�������� ��������, ���������� �����." << endl;
		cin >> r;
	}

	// �������� ������ ������������
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

	// ������� ���� ���������� ��� �����
	while (r != 0)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)((0) | (13)));

		Hello();

		SetConsoleTextAttribute(hConsole, (WORD)((0) | (10)));

		cout << "����� ����������, �������� ����� ����� ����������" << endl;
		cout << "1 - ���������� ���������" << endl;
		cout << "2 - ���������� ��������" << endl;
		cout << "3 - ���������� �������" << endl;
		cout << "4 - ���������� � ������� ��������� ������" << endl << endl;

		cout << "����� ������� � ��������� �������� �� ����, ������� 0" << endl;
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

// ������ ��������
void Task3()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (9)));

	cout << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "���������� � ���� ���������������� �������" << endl << endl;

	int n;

	cout << "������� ������ �������: ";
	cin >> n;
	vector <int> mas(n);

	srand(time(0));

	cout << endl;
	cout << "��������� ������ �� " << n << " ���������:" << endl;
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
	cout << "��������������� ������, ���������� � ���� Result" << endl;	
	fout << "��������������� ������:" << endl;

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

// ��������� ��������
void Task4()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0) | (14)));

	cout << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "������ ������ �� ���������� �����" << endl << endl;

	string s, d;
	cout << "������� ������ ��� ������ � ���� Resource:" << endl;
    cin >> d;

	getline(cin, s);
	
	ofstream fout("Resource.txt");
	fout << d << s << endl;
	fout.close();

	cout << endl;
	cout << "������ �� ����� Resource:" << endl;

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

// ���� ���������
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD) ((0) | (13)));

	Hello();
	cout << "������� ����� ��������: ";
	cin >> x;

	// �������� ������ �����
	while (x > 4)
	{
		SetConsoleTextAttribute(hConsole, (WORD)((0) | (13)));
		cout << "�������� ��������, ���������� �����." << endl;
		cin >> x;
	}

	// �������� ������ ���������
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

	// ������� � ��������� ���� ��� �����
	while(x != 0)
	{
		SetConsoleTextAttribute(hConsole, (WORD)((0) | (13)));

		Hello();

		cout << "����� ����������, �������� ����� ��������" << endl;
		cout << "����� ��������� �����, ������� 0" << endl;
		cin >> x;

		while (x > 4)
		{
			cout << "�������� ��������, ���������� �����." << endl;
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

	// ���������� ���������
	Goodbye();

	system("Pause");
	return 0;
}
