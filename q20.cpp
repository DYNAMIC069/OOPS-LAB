// Implement a real case scenario by a proper C++ code to provide the solution to
// Diamond Problem in C++
#include <iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout << "a class" << endl;
    }
    ~a()
    {
        cout << "a class destructed" << endl;
    }
};
class b : virtual public a
{
public:
    b()
    {
        cout << "b class" << endl;
    }
    ~b()
    {
        cout << "b class destructed" << endl;
    }
};
class c : virtual public a
{
public:
    c()
    {
        cout << "c class" << endl;
    }
    ~c()
    {
        cout << "c class destructed" << endl;
    }
};
class d : public b, public c
{
public:
    d()
    {
        cout << "d class" << endl;
    }
    ~d()
    {
        cout << "d class destructed" << endl;
    }
};
int main()
{
    d obj;
    return 0;
}
