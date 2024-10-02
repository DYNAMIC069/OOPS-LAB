// Implement a Program in C++ by defining a class to represent a bank account. Include the following:
//  Data Members
//  •	Name of the depositor
//  •	Account number
//  •	Type of account (Saving, Current etc.)
//  •	Balance amount in the account
//  Member Functions
//  •	To assign initial values
//  •	To deposit an amount
//  •	To withdraw an amount after checking the balance
//  •	To display name and balance

#include <bits/stdc++.h>
using namespace std;
class Bank
{
private:
    string name;
    long long accNo;
    string accType;
    double balance;

public:
    Bank() : balance(0.0) {}
    void setCreds(string name, long long accNo, string accType)
    {
        this->name = name;
        this->accNo = accNo;
        this->accType = accType;
    }
    void deposit(double amount)
    {
        this->balance += amount;
    }
    void withdraw(double amount)
    {
        if (amount > this->balance)
        {
            cout << "Low Balance" << endl;
        }
        else
        {
            this->balance -= amount;
        }
    }
    void display()
    {
        cout << "name: " << this->name << endl;
        cout << "balance: " << this->balance << endl;
    }
};
int main()
{
    Bank c1;
    string name;
    long long accNo;
    string accType;
    cout << "Enter name, acount number, and account type (Saving/Current): " << endl;
    cin >> name >> accNo >> accType;
    c1.setCreds(name, accNo, accType);
    double depositAmount;
    cout << "Enter deposit amount: " << endl;
    cin >> depositAmount;
    c1.deposit(depositAmount);
    c1.display();
    double withdrawAmount;
    cout << "Enter withdrawal amount: " << endl;
    cin >> withdrawAmount;
    c1.withdraw(withdrawAmount);
    c1.display();
    return 0;
}