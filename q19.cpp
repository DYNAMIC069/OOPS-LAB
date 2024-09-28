// Create a class called Student that contains the data members like age, name,
// enroll_no, marks. Create another class called Faculty that contains data members
// like facultyName, facultyCode, salary,deptt, age, experience, gender. Create the
// function display() in both the classes to display the respective information. The
// derived Class Person demonstrates multiple inheritance. The program should be
// able to call both the base classes and displays their information. Remove the
// ambiguity (When we have exactly same variables or same methods in both the base
// classes, which one will becalled?) by proper mechanism
#include <iostream>
using namespace std;

class student
{
private:
    int age, enroll_no, marks;
    string name;

public:
    student(int age, string name, int e_no, int marks)
    {
        this->age = age;
        this->enroll_no = e_no;
        this->marks = marks;
        this->name = name;
    }
    void display()
    {
        cout << "Name: " << name << "\n";
        cout << "Enroll_no: " << enroll_no << "\n";
        cout << "Age: " << age << "\n";
        cout << "Marks: " << marks << "\n";
    }
};

class faculty
{
private:
    string facultyName, deptt, gender, facultyCode;
    int salary, age, experience;

public:
    faculty(string facultyName, string facultyCode, int salary, string deptt, int age, int experience, string gender)
    {
        this->facultyName = facultyName;
        this->facultyCode = facultyCode;
        this->salary = salary;
        this->deptt = deptt;
        this->age = age;
        this->experience = experience;
        this->gender = gender;
    }
    void display()
    {
        cout << "Name: " << facultyName << "\n";
        cout << "Faculty Code: " << facultyCode << "\n";
        cout << "Salary: " << salary << "\n";
        cout << "Department: " << deptt << "\n";
        cout << "Age: " << age << "\n";
        cout << "Experience: " << experience << "\n";
        cout << "Gender: " << gender << "\n";
    }
};

class person : public student, public faculty
{
public:
    person(int age, string name, int e_no, int marks, string facultyName, string facultyCode, int salary, string deptt, int age2, int experience, string gender)
        : student(age, name, e_no, marks), faculty(facultyName, facultyCode, salary, deptt, age2, experience, gender) {}

    void display()
    {
        cout << "Student details: \n";
        student::display();
        cout << "Faculty details: \n";
        faculty::display();
    }
};

int main()
{
    person p(20, "ritik", 12345, 96,
             "Dr.Manohar", "F001", 75000, "Maths",
             40, 15, "Male");

    p.display();

    return 0;
}
