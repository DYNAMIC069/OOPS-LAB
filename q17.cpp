// Create a Base class that consists of private, protected and public data members and member functions. Try using different access modifiers for inheriting Base class to the Derived class and create a table that summarizes the above three modes (when derived in public, protected and private modes) and shows the access specifier of the members of base class in the Derived class.
#include <iostream>
using namespace std;

class Base
{
private:
    int a = 5;

protected:
    int b = 4;

public:
    int c = 3;
};

class Derived1 : public Base
{
public:
    void show()
    {
        cout << "Private member 'a': Not accessible\n";
        cout << "Protected member 'b': " << b << endl;
        cout << "Public member 'c': " << c << endl;
    }
};

class Derived2 : protected Base
{
public:
    void show()
    {
        cout << "Private member 'a': Not accessible\n";
        cout << "Protected member 'b': " << b << endl;
        cout << "Public member 'c': " << c << endl;
    }
};

class Derived3 : private Base
{
public:
    void show()
    {
        cout << "Private member 'a': Not accessible\n";
        cout << "Protected member 'b': " << b << endl;
        cout << "Public member 'c': " << c << endl;
    }
};

int main()
{
    Derived1 d1;
    Derived2 d2;
    Derived3 d3;
    cout << "Public Inheritance:" << endl;
    d1.show();
    cout << endl;
    cout << "Protected Inheritance:" << endl;
    d2.show();
    cout << endl;
    cout << "Private Inheritance:" << endl;
    d3.show();
    cout << endl;
    return 0;
}
