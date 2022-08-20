#include <iostream>
#include "account.h"
using namespace std;

enum OPTION
{
    DEPOSIT = 1,
    WITHDRAW = 2,
    PRINT = 3,
    QUIT = 4
};

int main()
{
    int n;
    Account* mine = new Account("Kartik", 5000);
    do
    {
        cin >> n;
        OPTION o = (OPTION)n;
        double amount;
        switch(o)
        {
        case DEPOSIT:
            cout << "Enter the Amount you'd like to depoit: ";
            cin >> amount;
            mine->Deposit(amount);
            cout << endl;
            break;
        case WITHDRAW:
            cout << "Enter the Amount you'd like to withdraw: ";
            cin >> amount;
            mine->Withdraw(amount);
            cout << endl;
            break;
        case PRINT:
            mine->Print();
            break;
        case QUIT:
            cout << "This program has come to an End. Goodbye!" << endl;
            break;
        }

    }while(n != 4);

    mine->~Account();

    return 0;
}
