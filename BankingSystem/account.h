//#ifndef ACCOUNT_H
//#define ACCOUNT_H
#pragma once


class Account
{
    double _balance;
    const char* _name;
public:
    Account(const char* name, double balance);
    void Deposit(double amount);
    void Withdraw(double amount);
    void Print();
    const char* Name();

};

//#endif // ACCOUNT_H
