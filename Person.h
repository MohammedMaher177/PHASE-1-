#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person
{
protected:
	string name, password;
	int id;
public:
	//constructor
	Person() {
		name = " ";
		password = " ";
		id = 0;
	}
	Person(string name, int id, string password) {
		this->name = name;
		this->id = id;
		this->password = password;
	}
	~Person(){}
	//setters
	void setName(string nane) { this->name = name; }
	void setId(int id) { this->id = id; }
	void setPasswword(string password) { this->password = password; }
	void setInfo(string name, int id, string password) {
		this->name = name;
		this->id = id;
		this->password = password;
	}

	//getters
	string getName() { return name; }
	int getId() { return id; }
	string getPassword() { return password; }
	//methods
};

