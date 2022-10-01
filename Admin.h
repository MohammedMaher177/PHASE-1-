#pragma once
#include "Employee.h"
class Admin :
    public Employee
{
private:

public:
    Admin(){}
    Admin(string name, int id, string password, double salary) :Employee(name, id, password,salary) {

    }
    ~Admin(){}
    void display();
};

