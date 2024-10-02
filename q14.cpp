// Create a class Complex having two int type variable named real & img denoting
// real and imaginary part respectively of a complex number. Overload +, - , ==
// operator to add, to subtract and to compare two complex numbers being denoted by
// the two complex type objects
#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex() : real(0), img(0) {};
    Complex(int r, int i) : real(r), img(i) {};
    Complex operator+(const Complex &d)
    {
        Complex temp;
        temp.real = this->real + d.real;
        temp.img = this->img + d.img;
        return temp;
    }
    Complex operator-(const Complex &d)
    {
        Complex temp;
        temp.real = this->real - d.real;
        temp.img = this->img - d.img;
        return temp;
    }
    bool operator==(const Complex &d)
    {
        return this->img == d.img && this->real == d.real;
    }
    void show()
    {
        cout << "Real: " << real << " , Imaginary: " << img << endl;
    }
};
int main()
{
    Complex d1(7, 5), d2(11, 9);
    cout << "Complex Number 1:" << endl;
    d1.show();
    cout << "Complex Number 2:" << endl;
    d2.show();
    Complex d3;
    cout << "Sum:" << endl;
    d3 = d1 + d2;
    d3.show();
    cout << "Difference:" << endl;
    d3 = d1 - d2;
    d3.show();
    if (d1 == d2)
    {
        cout << "euqal";
    }
    else
    {
        cout << "not equal";
    }
    return 0;
}
