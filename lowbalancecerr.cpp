#include <iostream>
using namespace std;
class Bank
{
private:
    int balance;

public:
    Bank()
    {
        balance = 0;
    }
    void deposit(int amount)
    {
        balance += amount;
    }
    void withdraw(int amount)
    {
        if (balance < amount)
        {
            throw "Low Balance";
        }
        balance -= amount;
    }
    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    Bank b;
    b.deposit(1000);
    b.display();
    try
    {
        b.withdraw(2000);
    }
    catch (const char *err)
    {
        cerr << err << endl;
    }
    b.display();
    return 0;
}