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
		cout << "Выберите чьи данные хотите ввести :\n "
			<< "1 - Работник \n"
			<< " 2 - Студент \n"
			<< " 3  - Школьник \n"
			<< " 0  - Выход \n"
			<< " Ваш выбор : ";
		cin >> ch;
		cin.ignore();
		switch (ch)
		{
		case 1:
		{
			char* lastname = new char[15];
			cout << " Введите фамилию :";
			gets_s(lastname, 15);

			char* name = new char[10];
			cout << " Введите имя :";
			gets_s(name, 10);

			char* otchestvo = new char[15];
			cout << " Введите отчество:";
			gets_s(otchestvo, 15);
			int age;
			cout << " Введите возраст : ";
			cin >> age;
			float zp;
			cout << " Введите зарплату :";
			cin >> zp;
			int workhours;
			cout << " Введите часы работы : ";
			cin >> workhours;
			Worker example(zp, workhours, name, lastname, otchestvo, age);
			cout << example;
			break;
		}
		case 2:
		{
			char* lastname = new char[15];
			cout << " Введите фамилию :";
			gets_s(lastname, 15);

			char* name = new char[10];
			cout << " Введите имя :";
			gets_s(name, 10);

			char* otchestvo = new char[15];
			cout << " Введите отчество:";
			gets_s(otchestvo, 15);
			char* group = new char[10];
			cout << " Введите группу :";
			gets_s(group, 10);
			int age;
			cout << " Введите возраст : ";
			cin >> age;
			float step;
			cout << " Введите степендию :";
			cin >> step;
			Student example(group, step, name, lastname, otchestvo, age);
			cout << example;
			break;
		}
		case 3:
		{
			char* lastname = new char[15];
			cout << " Введите фамилию :";
			gets_s(lastname, 15);

			char* name = new char[10];
			cout << " Введите имя :";
			gets_s(name, 10);

			char* otchestvo = new char[15];
			cout << " Введите отчество:";
			gets_s(otchestvo, 15);
			int age;
			cout << " Введите возраст : ";
			cin >> age;
			int klass;
			cout << " Введите класс : ";
			cin >> klass;

			float bal;
			cout << " Введите средний бал :";
			cin >> bal;

			Schoolchild example(klass, bal, name, lastname, otchestvo, age);
			cout << example;
			break;
		}

		}
	} while (ch != 0);
}

