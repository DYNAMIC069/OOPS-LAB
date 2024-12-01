// You are given three classes A, B and C. All three classes implement their own
// version of func. In class A, func multiplies the value passed as a parameter by 2. In
// class B, func multiplies the value passed as a parameter by 3. In class C, func
// multiplies the value passed as a parameter by 5.You are given class D such that You
// need to modify the class D and implement the function update_val which sets D's
// val to new_val by manipulating the value by only calling the func defined in classes
// A, B and C.It is guaranteed that new_val has only 2, 3 and 5 as its prime factors.
// Implement class D's function update_val. This function should update D's val only
// by calling A, B and C's func.
// Sample Input
// new_val = 30
// Sample Output
// A's func called 1 times
// B's func called 1 times
// C's func called 1 times
#include <iostream>
using namespace std;
class A
{
public:
    static int mulByTwo(int x)
    {
        return x * 2;
    }
};
class B
{
public:
    static int mulByThree(int x)
    {
        return x * 3;
    }
};
class C
{
public:
    static int mulByFive(int x)
    {
        return x * 5;
    }
};
class D
{
private:
    int new_val;

public:
    int update_val = 1;
    int count_2 = 0;
    int count_3 = 0;
    int count_5 = 0;
    D(int n)
    {
        this->new_val = n;
    }
    void calc()
    {
        int tmp = new_val;
        while (tmp % 2 == 0)
        {
            this->update_val = A::mulByTwo(this->update_val);
            this->count_2++;
            tmp /= 2;
        }
        while (tmp % 3 == 0)
        {
            this->update_val = B::mulByThree(this->update_val);
            this->count_3++;
            tmp /= 3;
        }
        while (tmp % 5 == 0)
        {
            this->update_val = C::mulByFive(this->update_val);
            this->count_5++;
            tmp /= 5;
        }
    }
    void show()
    {
        cout << "A called " << count_2 << "times" << endl;
        cout << "B called " << count_3 << "times" << endl;
        cout << "C called " << count_5 << "times" << endl;
    }
};
int main()
{
    int n;
    cin >> n;
    D d(n);
    d.calc();
    d.show();
    return 0;
}
