// Create class SavingsAccount. Use a static variable annualInterestRate to store the
// annual interest rate for all account holders. Each object of the class contains a private
// instance variable savingsBalance indicating the amount the saver currently has on
// deposit. Provide method calculateMonthlyInterest() to calculate the monthly
// interest by multiplying the savingsBalance by annualInterestRate divided by
// 12.This interest should be added tosavingsBalance. Provide a static method
// modifyInterestRate() that sets the annualInterestRate to a new value. Write a
// program to test class SavingsAccount. Instantiate two savingsAccount objects,
// saver1 and saver2, with balances of Rs2000.00 and Rs3000.00, respectively. Set
// annualInterestRate to 4%, then calculate the monthly interest and print the new
// balances for both savers. Then set the annualInterestRate to 5%, calculate the next month’s interest and print the new balances for both savers
#include <bits/stdc++.h>
using namespace std;
class savingAccount
{
private:
    double savingsBalance;

public:
    static double annualInterestRate;
    savingAccount() : savingsBalance(0.0) {};
    savingAccount(double x) : savingsBalance(x) {};
    static void modifyInterestRate(int x)
    {
        annualInterestRate = x;
    }
    void calculateMonthlyInterest()
    {
        double interest = (annualInterestRate * savingsBalance) / 12;
        this->savingsBalance += interest;
    }
    void display()
    {
        cout << "Savings balance: " << savingsBalance << endl;
    }
};
double savingAccount::annualInterestRate = 0;
int main()
{
    savingAccount saver1(2000.0), saver2(3000.00);
    cout << "Initial Balances" << endl;
    saver1.display();
    saver2.display();
    savingAccount::modifyInterestRate(4);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "Balances after 4% interest rate" << endl;
    saver1.display();
    saver2.display();
    savingAccount::modifyInterestRate(5);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "Balances after 5% interest rate" << endl;
    saver1.display();
    saver2.display();
    return 0;
}
