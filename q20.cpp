// Implement a real case scenario by a proper C++ code to provide the solution to
// Diamond Problem in C++
#include <iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout << "a class constructor" << endl;
    }
    ~a()
    {
        cout << "a class destructer" << endl;
    }
};
class b : virtual public a
{
public:
    b()
    {
        cout << "b class constructor" << endl;
    }
    ~b()
    {
        cout << "b class destructer" << endl;
    }
};
class c : virtual public a
{
public:
    c()
    {
        cout << "c class constructor" << endl;
    }
    ~c()
    {
        cout << "c class destructer" << endl;
    }
};
class d : public b, public c
{
public:
    d()
    {
        cout << "d class constructor" << endl;
    }
    ~d()
    {
        cout << "d class destructer" << endl;
    }
};
int main()
{
    d obj;
    return 0;
}
