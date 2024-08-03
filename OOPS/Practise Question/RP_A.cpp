#include <iostream>
#include <string>
using namespace std;

// Abstract class for bank account
class Account
{
protected:
    string accountNumber;
    double balance;

public:
    Account(const string &accNum, double bal) : accountNumber(accNum), balance(bal) {}
    virtual void deposit(double amount) = 0;  // Pure virtual function
    virtual void withdraw(double amount) = 0; // Pure virtual function
    virtual void display() = 0;               // Pure virtual function
};

// Savings Account
class SavingsAccount : public Account
{
private:
    double interestRate;

public:
    SavingsAccount(const string &accNum, double bal, double rate)
        : Account(accNum, bal), interestRate(rate) {}

    void deposit(double amount) 
    {
        balance += amount;
    }

    void withdraw(double amount) 
    {
        if (balance >= amount)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient funds!" << endl;
        }
    }

    void display() 
    {
        cout << "Savings Account - ";
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

// Checking Account
class CheckingAccount : public Account
{
private:
    double overdraftLimit;

public:
    CheckingAccount(const string &accNum, double bal, double limit)
        : Account(accNum, bal), overdraftLimit(limit) {}

    void deposit(double amount) 
    {
        balance += amount;
    }

    void withdraw(double amount) 
    {
        if (balance + overdraftLimit >= amount)
        {
            balance -= amount;
        }
        else
        {
            cout << "Withdrawal amount exceeds overdraft limit!" << endl;
        }
    }

    void display() 
    {
        cout << "Checking Account - ";
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main()
{
    // Polymorphism example
    Account *account1 = new SavingsAccount("SA001", 1000, 0.05);
    Account *account2 = new CheckingAccount("CA001", 2000, 500);

    // Deposit and display
    account1->deposit(500);
    account1->display();

    account2->deposit(1000);
    account2->display();

    // Withdraw and display
    account1->withdraw(200);
    account1->display();

    account2->withdraw(3000);
    account2->display();

    delete account1;
    delete account2;

    return 0;
}
