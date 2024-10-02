// Implement a C++ program to demonstrate the concept of data abstraction using the
// concept of Class and Objects
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int age;
    int roll_no;

public:
    void set_data(string n, int a, int r)
    {
        name = n;
        age = a;
        roll_no = r;
    }
    void get_data()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};
int main()
{
    Student s;
    s.set_data("Igon", 20, 101);
    s.get_data();
    return 0;
}