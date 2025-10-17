#include <iostream>
using namespace std;

struct Account {
    int name;
    double balance;
};

void deposit(Account* acc, double amount) {
    acc->balance += amount;
    cout << "after dep " << acc->balance << endl;
}

void withdraw(Account& acc, double amount) {
    if (amount <= acc.balance) {
        acc.balance -= amount;
        cout << "after snyal " << acc.balance << endl;
    }
    else {
        cout << "no money :(" << endl;
    }
}

int main() {
    Account myAccount;
    myAccount.name = 80;
    myAccount.balance = 1000.0;

    cout << "number" << myAccount.name << "you had " << myAccount.balance << endl;

    deposit(&myAccount, 500.0);
    withdraw(myAccount, 300.0);


    return 0;
}
