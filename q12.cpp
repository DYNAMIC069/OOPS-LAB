// Create a class called Time that has separate int member data for hours, minutes and
// seconds. One constructor should initialize this data to 0, and another should
// initialize it to fixed values. A member function should display it in 11:59:59 format.
// A member function named add() should add two objects of type time passed as
// arguments. A main ( ) program should create two initialized values together, leaving
// the result in the third time variable. Finally it should display the value of this third
// variable.
#include <bits/stdc++.h>
using namespace std;
class timec
{
private:
    int hrs, min, sec;
    int addedTime;

public:
    timec()
    {
        hrs = 0;
        min = 0;
        sec = 0;
        addedTime = 0;
    }
    timec(int hrs, int min, int sec)
    {
        this->hrs = hrs;
        this->min = min;
        this->sec = sec;
    }
    void show()
    {
        cout << hrs << ":" << min << ":" << sec << endl;
    }
    void add(timec t, timec &newt)
    {
        int secondSum = this->sec + t.sec;
        int minSum = this->min + t.min;
        int hourSum = this->hrs + t.hrs;
        int secondCarry = 0, minCarry = 0;
        if (secondSum >= 60)
        {
            secondCarry = (secondSum) / 60;
            secondSum = secondSum - 60;
        }
        minSum += secondCarry;
        if (minSum >= 60)
        {
            minCarry = (minSum) / 60;
            minSum = minSum - 60;
        }
        hourSum += minCarry;
        newt.hrs = hourSum, newt.min = minSum, newt.sec = secondSum;
    }
};
int main()
{
    timec t1(15, 45, 30);
    timec t2(16, 23, 49);
    timec t3;
    cout << "Time 1: ";
    t1.show();
    cout << "Time 2: ";
    t2.show();
    t1.add(t2, t3);
    cout << "Added Time: ";
    t3.show();
    return 0;
}
