// Construct a Program in C++ to show the working of function overloading(compile
// time polymorphism) by using a function named calculate Area () to calculate area
// of square, rectangle and triangle using different signatures as required.
#include <iostream>
#include <math.h>
using namespace std;

int Area(int n)
{
    return n * n;
}
int Area(int n, int m)
{
    return n * m;
}
int Area(int n, int m, int l)
{
    int s = n + m + l;
    s = s / 2;
    s = (s * (s - n) * (s - m) * (s - l));
    int ans = sqrt(s);
    return ans;
}

int main()
{
    cout << Area(4) << endl;
    cout << Area(4, 5) << endl;
    cout << Area(4, 5, 6) << endl;
    return 0;
}