#include "account.h"
#include <iostream>
Account::Account(const char* name, double balance)
{
    this->_name = name;
    this->_balance = balance;
}

void Account::Deposit(double amount)
{
    if (amount > -1)
        this->_balance += amount;
    else
        std::cout << "Please input a valid non-negative amount" << std::endl;
}

void Account::Withdraw(double amount)
{
    if (amount > -1)
        this->_balance += amount;
    else
        std::cout << "Please input a valid non-negative amount" << std::endl;
}

void Account::Print()
{
    std::cout << "Name: " << this->_name << "\n";
    std::cout << "Balance: " << this->_balance << "\n";
}

const char* Account::Name()
{
    return this->_name;
}
