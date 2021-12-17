#pragma once
#include "Human.h"

class Schoolchild :public Human
{
protected:
	int klass;
	float sr_bal;
	
public:
	Schoolchild() :Human()
	{
		this->klass = 0;
		this->sr_bal = 0.0;
	}
	Schoolchild(int nklass, float nsr_bal, char* name, char* lastname, char* otchestvo, int age) :Human(name, lastname, otchestvo, age)
	{
		this->klass = nklass;
		this->sr_bal = nsr_bal;
	}

	friend std::ostream& operator<<(std::ostream& out, const Schoolchild& sc)
	{
		out << " Фамилия : " << sc.lastname << " Имя :  " << sc.name << " Отчество:  " << sc.otchestvo << "\n"
			<< " Возраст: " << sc.age << " Класс : " << sc.klass << " Средний бал: " << sc.sr_bal << "\n";
		return out;
	}
};

