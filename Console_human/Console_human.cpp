#include <iostream>
#include "Worker.h"
#include "Student.h"
#include "Schoolchild.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int ch;
	do {
		cout << "�������� ��� ������ ������ ������ :\n "
			<< "1 - �������� \n"
			<< " 2 - ������� \n"
			<< " 3  - �������� \n"
			<< " 0  - ����� \n"
			<< " ��� ����� : ";
		cin >> ch;
		cin.ignore();
		switch (ch)
		{
		case 1:
		{
			char* lastname = new char[15];
			cout << " ������� ������� :";
			gets_s(lastname, 15);

			char* name = new char[10];
			cout << " ������� ��� :";
			gets_s(name, 10);

			char* otchestvo = new char[15];
			cout << " ������� ��������:";
			gets_s(otchestvo, 15);
			int age;
			cout << " ������� ������� : ";
			cin >> age;
			float zp;
			cout << " ������� �������� :";
			cin >> zp;
			int workhours;
			cout << " ������� ���� ������ : ";
			cin >> workhours;
			Worker example(zp, workhours, name, lastname, otchestvo, age);
			cout << example;
			break;
		}
		case 2:
		{
			char* lastname = new char[15];
			cout << " ������� ������� :";
			gets_s(lastname, 15);

			char* name = new char[10];
			cout << " ������� ��� :";
			gets_s(name, 10);

			char* otchestvo = new char[15];
			cout << " ������� ��������:";
			gets_s(otchestvo, 15);
			char* group = new char[10];
			cout << " ������� ������ :";
			gets_s(group, 10);
			int age;
			cout << " ������� ������� : ";
			cin >> age;
			float step;
			cout << " ������� ��������� :";
			cin >> step;
			Student example(group, step, name, lastname, otchestvo, age);
			cout << example;
			break;
		}
		case 3:
		{
			char* lastname = new char[15];
			cout << " ������� ������� :";
			gets_s(lastname, 15);

			char* name = new char[10];
			cout << " ������� ��� :";
			gets_s(name, 10);

			char* otchestvo = new char[15];
			cout << " ������� ��������:";
			gets_s(otchestvo, 15);
			int age;
			cout << " ������� ������� : ";
			cin >> age;
			int klass;
			cout << " ������� ����� : ";
			cin >> klass;

			float bal;
			cout << " ������� ������� ��� :";
			cin >> bal;

			Schoolchild example(klass, bal, name, lastname, otchestvo, age);
			cout << example;
			break;
		}

		}
	} while (ch != 0);
}

