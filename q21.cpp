// Create a base class called shape. Use this class to store two double type values that
// could be used to compute the area of figures. Derive two specific classes called
// triangle and rectangle from base shape. Add to the base class, a member function
// get_data() to initialize base class data members and another member function
// display_area() to compute and display the area of figures. Make display_area() as a
// virtual function and redefine this function in the derived class to suit their
// requirements. Using these three classes, design a program that will accept
// dimensions of a triangle or a rectangle interactively and display the area. Remember
// the two values given as input will be treated as lengths of
// two sides in the case of rectangles and as base and height in the case of triangle and
// used as follows:
// Area of rectangle = x * y
// Area of triangle = ½ *x*y
#include <iostream>
using namespace std;
class shape
{
public:
    double x;
    double y;
    virtual void get_data(double x, double y) = 0;
    virtual void display_area() = 0;
};
class triangle : public shape
{
public:
    void get_data(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    void display_area()
    {
        double area = 0.5 * x * y;
        cout << "Area: " << area << endl;
    }
};
class rectangle : public shape
{
public:
    void get_data(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    void display_area()
    {
        double area = x * y;
        cout << "Area: " << area << endl;
    }
};
int main()
{
    shape *s;
    triangle t;
    rectangle r;
    s = &t;
    s->get_data(6.5, 7.4);
    s->display_area();
    s = &r;
    s->get_data(9.1, 2.8);
    s->display_area();
    return 0;
}
