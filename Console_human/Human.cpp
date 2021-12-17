#include "Human.h"

Human::Human()
{
	this->name = new char[10];
	this->lastname = new char[15];
	this->otchestvo = new char [15];
	this->age = 0;
}

Human::Human(char* new_name, char* new_lastname, char* new_otchestvo, int n_age)
{
	this->name = new char[10];
	this->lastname = new char[15];
	this->otchestvo = new char[15];
	strcpy_s(name, 10, new_name);
	strcpy_s(lastname, 15, new_lastname);
	strcpy_s(otchestvo, 15, new_otchestvo);
	this->age = n_age;

}

std::ostream& operator<<(std::ostream& out, const Human& hu)
{
	out << " Фамилия : " << hu.lastname << " Имя :  " << hu.name << " Отчество:  " << hu.otchestvo << "\n"
		<< " Возраст: " << hu.age << "\n";
	return out;
}

