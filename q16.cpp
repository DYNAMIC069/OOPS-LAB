// Using the concept of operator overloading. Implement a program to overload the
// following:
// With the help of friend function
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
    friend void operator-(overLoad &obj);
    friend void operator++(overLoad &obj);
    friend void operator--(overLoad &obj);
    friend void operator++(overLoad &obj, int);
    friend void operator--(overLoad &obj, int);
    void show()
    {
        cout << "a: " << a << " b: " << b << endl;
    }
};
void operator-(overLoad &obj)
{
    obj.a = -obj.a;
    obj.b = -obj.b;
}
void operator++(overLoad &obj)
{
    obj.a++;
    obj.b++;
}
void operator--(overLoad &obj)
{
    obj.a--;
    obj.b--;
}
void operator++(overLoad &obj, int noUse)
{
    obj.a++;
    obj.b++;
}
void operator--(overLoad &obj, int noUse)
{
    obj.a--;
    obj.b--;
}
int main()
{
    overLoad obj(10, 20);
    cout << "Initial values: " << endl;
    obj.show();
    -obj;
    cout << "After unary -: " << endl;
    obj.show();
    --obj;
    cout << "After unary --: " << endl;
    obj.show();
    obj--;
    obj.show();
    ++obj;
    cout << "After unary ++: " << endl;
    obj.show();
    obj++;
    obj.show();
    return 0;
}