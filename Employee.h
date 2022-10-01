#pragma once
#include "Person.h"
class Employee :
    public Person
{
protected:
    double salary;
public:
    Employee();
    Employee(string name, int id, string password, double balance);
    ~Employee();
    //setters
    void setSalary(double salary);
    //getters
    double getSalary();
    void display();
};

