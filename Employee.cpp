#include "Employee.h"

Employee::Employee() {}
Employee::Employee(string name, int id, string password, double balance) 
{
    this->name = name;
    this->id = id;
    this->password = password;
    this->salary = salary; 
}
Employee::~Employee() {}
//setters
void Employee::setSalary(double salary) { this->salary = salary; }
//getters
double Employee::getSalary() { return salary; }
void Employee::display() {
    cout << "NAME: " << name << endl
        << "ID: " << id << endl
        << "PASSWORD:" << password << endl
        << "SALARY: " << salary << endl;
}