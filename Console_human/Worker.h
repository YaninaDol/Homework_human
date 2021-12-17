#pragma once
#include "Human.h"

class Worker:public Human
{
protected:
    float zp;
    int workhours;
public:
    Worker() :Human()
    {
        this->zp = 0.0;
        this->workhours = 0;
    }
    Worker(float nzp, int nworkhours, char* name, char* lastname, char* otchestvo, int age) :Human(name, lastname, otchestvo, age)
    {
        this->zp = nzp;
        this->workhours = nworkhours;

    }
    friend std::ostream& operator<<(std::ostream& out, const Worker& w)
    {
        out << " Фамилия : " << w.lastname << " Имя :  " << w.name << " Отчество:  " << w.otchestvo << "\n"
            << " Возраст: " << w.age <<" Зарплата : "<<w.zp<<" Часы работы: "<<w.workhours << "\n";
        return out;
    }

};

