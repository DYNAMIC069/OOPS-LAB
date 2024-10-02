// Using the concept of operator overloading. Implement a program to overload the
// following:
// a. Unary –
// b. Unary ++ preincrement, postincrement
// c. Unary -- predecrement, postdecrement
#include <iostream>
using namespace std;
class overLoad
{
private:
    int a, b;

public:
    overLoad(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void operator-()
    {
        a = -a;
        b = -b;
    }
    void operator++()
    {
        a++;
        b++;
    }
    void operator++(int noUse)
    {
        a++;
        b++;
    }
    void operator--()
    {
        a--;
        b--;
    }
    void operator--(int noUse)
    {
        a--;
        b--;
    }
    void show()
    {
        cout << "a: " << a << " b: " << b << endl;
    }
};
int main()
{
    overLoad obj(10, 20);
    cout << "Initial values" << endl;
    obj.show();
    -obj;
    cout << "After unary -" << endl;
    obj.show();
    --obj;
    cout << "After unary --" << endl;
    obj.show();
    obj--;
    obj.show();
    ++obj;
    cout << "After unary ++" << endl;
    obj.show();
    obj++;
    obj.show();
    return 0;
}