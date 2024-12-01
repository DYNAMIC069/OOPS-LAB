#include <bits/stdc++.h>
using namespace std;
class CountObj
{
private:
    static int count;

public:
    CountObj()
    {
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
int CountObj::count = 0;
int main()
{
    CountObj c1, c2, c3;
    cout << CountObj::getCount() << endl;
    return 0;
}