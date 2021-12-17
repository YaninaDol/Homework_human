#pragma once
#include "Human.h"

class Student :public Human
{
protected:
	char* group = new char[10];
	float stependiya;
public:
	Student() :Human()
	{
		this->group = nullptr;
		this->stependiya = 0.0;
	}
	Student(char* ngroup, float nstependiya, char* name, char* lastname, char* otchestvo, int age) :Human(name, lastname, otchestvo, age)
	{
		strcpy_s(group, 10, ngroup);
		this->stependiya = nstependiya;
	}
	friend std::ostream& operator<<(std::ostream& out, const Student& s)
	{
		out << " Фамилия : " << s.lastname << " Имя :  " << s.name << " Отчество:  " << s.otchestvo << "\n"
			<< " Возраст: " << s.age << " Группа : " << s.group << " Степендия: " << s.stependiya << "\n";
		return out;
	}
};

