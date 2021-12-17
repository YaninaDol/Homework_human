#pragma once
#include <iostream>

class Human
{
protected:
	char* name = new char[10];
	char* lastname = new char[15];
	char* otchestvo = new char[15];
	int age;
public:
	Human();
	Human(char* new_name, char* new_lastname, char* new_otchestvo, int n_age);
	friend std::ostream& operator<<(std::ostream& out, const Human& hu);
	
};

