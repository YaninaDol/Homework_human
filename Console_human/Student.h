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
		out << " ������� : " << s.lastname << " ��� :  " << s.name << " ��������:  " << s.otchestvo << "\n"
			<< " �������: " << s.age << " ������ : " << s.group << " ���������: " << s.stependiya << "\n";
		return out;
	}
};

