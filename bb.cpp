#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    virtual void get_data() = 0;
    virtual void put_data() = 0;
};
class Professor : public Person
{
private:
    int publications;
    static int id_counter;
    int curr_id;

public:
    Professor()
    {
        curr_id = ++id_counter;
    }
    void get_data() override
    {
        cin >> name;
        cin >> age;
        cin >> publications;
    }
    void put_data() override
    {
        cout << name << " " << age << " " << publications << " " << curr_id << endl;
    }
};
int Professor::id_counter = 0;
class Student : public Person
{
private:
    int marks[6];
    static int id_counter;
    int curr_id;

public:
    Student()
    {
        curr_id = ++id_counter;
    }
    void get_data() override
    {
        cin >> name;
        cin >> age;
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }
    void put_data() override
    {
        cout << name << " " << age << " " << curr_id << " ";
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum += marks[i];
        }
        cout << sum << endl;
    }
};
int Student::id_counter = 0;
int main()
{
    int n, ind = 0;
    cout << "enter number of objects: " << endl;
    cin >> n;
    Person *p[n];
    for (int i = 0; i < n; i++)
    {
        int type;
        cout << "Enter type: " << endl;
        cin >> type;
        if (type == 1)
        {
            p[ind] = new Professor();
        }
        else
        {
            p[ind] = new Student();
        }
        p[ind]->get_data();
        ind++;
    }
    for (int i = 0; i < n; i++)
    {
        p[i]->put_data();
        delete p[i];
    }
    return 0;
}