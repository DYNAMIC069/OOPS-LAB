// Create a base class called CAL_AREA(Abstract). Use this class to store float type
// values that could be used to compute the volume of figures. Derive two specific
// classes called cone, hemisphere and cylinder from the base CAL_AREA. Add to
// the base class, a member function getdata ( ) to initialize base class data members
// and another member function display volume( ) to compute and display the volume
// of figures. Make display volume ( ) as a pure virtual function and redefine this
// function in the derived classes to suit their requirements. Using these three classes,
// design a program that will accept dimensions of a cone, cylinder and hemisphere
// interactively
// and display the volumes. Remember values given as input will be and used as
// follows:
// Volume of cone = (1/3)πr2h
// Volume of hemisphere = (2/3)πr3
// Volume of cylinder = πr2h
#include <iostream>
using namespace std;
class CAL_AREA
{
protected:
    float r, h;

public:
    virtual void getdata()
    {
        cout << "Enter the radius and height: ";
        cin >> r >> h;
    }
    virtual void display_volume() = 0;
};
class cone : public CAL_AREA
{
public:
    void display_volume() override
    {
        float volume = (1.0 / 3.0) * 3.14 * r * r * h;
        cout << "Volume of cone: " << volume << endl;
    }
};
class hemisphere : public CAL_AREA
{
public:
    void getdata() override
    {
        cout << "Enter the radius: ";
        cin >> r;
    }
    void display_volume() override
    {
        float volume = (2.0 / 3.0) * 3.14 * r * r * r;
        cout << "Volume of hemisphere: " << volume << endl;
    }
};

class cylinder : public CAL_AREA
{
public:
    void display_volume() override
    {
        float volume = 3.14 * r * r * h;
        cout << "Volume of cylinder: " << volume << endl;
    }
};

int main()
{
    CAL_AREA *ptr;
    cone c;
    hemisphere h;
    cylinder cy;
    cout << "Cone: " << endl;
    ptr = &c;
    ptr->getdata();
    ptr->display_volume();
    cout << "Hemisphere: " << endl;
    ptr = &h;
    ptr->getdata();
    ptr->display_volume();
    cout << "Cylinder: " << endl;
    ptr = &cy;
    ptr->getdata();
    ptr->display_volume();
    return 0;
}