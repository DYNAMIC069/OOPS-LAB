// An electricity board charges the following rates to domestic users to discourage
// large consumption of energy.
// For the first 100 units: - 60 P per unit
// For the next 200 units: -80 P per unit
// Beyond 300 units: -90 P per unit
// All users are charged a minimum of Rs 50 if the total amount is more than Rs 300
// then an additional surcharge of 15% is added.
// 50
// Implement a C++ program to read the names of users and number of units consumed
// and display the charges with names
#include <bits/stdc++.h>
using namespace std;

class bill
{
private:
    string name;
    int units;
    float cost;

public:
    void setName(string name)
    {
        this->name = name;
    }

    void setUnits(int units)
    {
        this->units = units;
    }

    void getBill()
    {
        int x = this->units;

        if (x <= 100)
        {
            this->cost = x * 60;
        }
        else if (x <= 300)
        {
            this->cost = 100 * 60 + (x - 100) * 80;
        }
        else
        {
            this->cost = 100 * 60 + 200 * 80 + (x - 300) * 90;
        }
        this->cost /= 100;

        if (this->cost < 50)
        {
            this->cost += 50;
        }

        if (this->cost > 300)
        {
            this->cost += 0.15 * this->cost;
        }
    }

    void output()
    {
        cout << "name: " << this->name << endl;
        cout << "no of units: " << this->units << endl;
        cout << "total bill: Rs " << this->cost << endl;
    }
};

int main()
{
    int n;
    cout << "enter number of users" << endl;
    cin >> n;
    bill c[n];

    for (int i = 0; i < n; i++)
    {
        string s;
        cout << "enter name:" << endl;
        cin >> s;
        int x;
        cout << "enter units:" << endl;
        cin >> x;
        c[i].setName(s);
        c[i].setUnits(x);
        c[i].getBill();
    }
    cout << "\nElectricity bill details:" << endl;
    for (int i = 0; i < n; i++)
    {
        c[i].output();
    }
}
