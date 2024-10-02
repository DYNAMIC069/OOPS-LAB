// Imagine a tollbooth with a class called TollBooth. The two data items are of type
// unsigned int and double to hold the total number of cars and total amount of money
// collected. A constructor initializes both of these data members to 0. A member
// function called payingCar( )increments the car total and adds 0.5 to the cash total.
// Another function called nonPayCar( ) increments the car total but adds nothing to
// the cash total. Finally a member function called display( )shows the two totals.
// Include a program to test this class. This program should allow the user to push one
// key to count a paying car and another to count a non paying car. Pushing the ESC
// key should cause the program to print out the total number of cars and total cash
// and then exit.
#include <iostream>
#include <conio.h>
using namespace std;
class TollBooth
{
private:
    unsigned int totalCars;
    double totalAmount;

public:
    TollBooth()
    {
        totalCars = 0;
        totalAmount = 0.0;
    }
    void payingCar()
    {
        totalCars++;
        totalAmount += 0.5;
    }
    void nonPayCar()
    {
        totalCars++;
    }
    void display()
    {
        cout << "TTotal Cars: " << totalCars << endl;
        cout << "Total Amount: " << totalAmount << endl;
    }
};
int main()
{
    TollBooth tb;
    cout << "Press 'p' for paying car, 'n' for non paying car and 'esc' to exit" << endl;
    while (1)
    {
        char ch;
        ch = _getch(); // to take keypress without enter
        cout << ch << endl;
        switch (ch)
        {
        case 'p':
            tb.payingCar();
            break;
        case 'n':
            tb.nonPayCar();
            break;
        case 27:
            tb.display();
            return 0;
        }
    }
    return 0;
}