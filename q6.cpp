// Define a class Hotel in C++ with the following specifications
// Private members
// • Rno Data member to store room number
// • Name Data member to store customer name
// • Tariff Data member to store per day charges
// • NOD Data member to store number of days of stay
// • CALC() Function to calculate and return amount as NOD*Tariff ,and if the value
// of days* Tariff >10000,
// then total amount is 1.05* days*Tariff.
// Public members
// • Checkin() Function to enter the content Rno, Name, Tariff and NOD
// • Checkout() Function to display Rno, Name, Tariff,
// NOD and Amount (amount to be displayed by calling function) CALC()
#include <iostream>
using namespace std;
class Hotel
{
private:
    int Rno;
    string Name;
    int Tariff;
    int NOD;
    double calc()
    {
        double amount = NOD * Tariff;
        if (amount > 10000)
        {
            amount = 1.05 * amount;
        }
        return amount;
    }

public:
    void checkIn(int Rno, string Name, int Tariff, int NOD)
    {
        this->Rno = Rno;
        this->Name = Name;
        this->Tariff = Tariff;
        this->NOD = NOD;
    }
    void checkOut()
    {
        cout << "Room Number: " << Rno << endl;
        cout << "Name: " << Name << endl;
        cout << "Tariff: " << Tariff << endl;
        cout << "Number of Days: " << NOD << endl;
        cout << "Amount: " << calc() << endl;
    }
};
int main()
{
    Hotel h1;
    h1.checkIn(216, "Mark", 1000, 14);
    h1.checkOut();
    return 0;
}
