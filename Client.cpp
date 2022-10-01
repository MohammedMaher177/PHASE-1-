#include "Client.h"

Client::Client() {
    balance = 0;
}
Client::Client(string name, int id, string password, double balance) :Person(name, id, password) { this->balance = balance; }
Client::~Client() {}

//setters
void Client::setBalance(double balance) { this->balance = balance; }
void Client::setInfo(string name, int id, string password, double balance)
{
    this->name = name;
    this->id = id;
    this->password = password;
    this->balance = balance;
}

//getters
double Client::getBalance() { return balance; }
//methods
void Client::display() {
    cout << "NAME: " << name << endl
        << "ID: " << id << endl
        << "PASSWORD: " << password << endl
        << "BALANCE: " << balance << endl;
}
void Client::deposit(double amount) {
    balance += amount;
}
void Client::withdraw(double amount)
{
    if (amount <= balance) { balance -= amount; }
    else { cout << "NOT ALLOWED"; }
}
void Client::transfer(Client recipient, double amount) {
    if (amount <= balance) {
        withdraw(amount);
        recipient.deposit(amount);
    }
    else { cout << "NOT ALLOWED"; }
}
void Client::checkBalance() {
    cout << "BALANCE: " << balance << endl;
}