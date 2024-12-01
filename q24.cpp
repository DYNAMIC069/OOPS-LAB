// Templates are the foundation of generic programming, which involves writing code
// in a way that is independent of any particular type. Write a program that can create
// a list (create a class list) of given type (int, float, char etc.) and perform insertion
// and deletion on list object.
#include <bits/stdc++.h>
using namespace std;

template <class T, int n>
class List
{
private:
    T arr[n];

public:
    void input()
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void show()
    {
        cout << "List: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    List<int, 5> li;
    li.input();
    li.show();
    List<float, 5> lf;
    lf.input();
    lf.show();
    List<char, 5> lc;
    lc.input();
    lc.show();
    return 0;
}