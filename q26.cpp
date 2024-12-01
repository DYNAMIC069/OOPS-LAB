// Construct a C++ program to demonstrate different methods of List, Vector and Map in STL(Standard Template Library)
#include <iostream>
#include <list>
#include <vector>
#include <map>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    list<int>::iterator it;
    cout << "List: ";
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    l.reverse();
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    l.sort();
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    vector<int> v = {2, 1, 8, 3, 4, 5};
    vector<int>::iterator it1;
    cout << "Vector: ";
    for (it1 = v.begin(); it1 != v.end(); it1++)
    {
        cout << *it1 << " ";
    }
    cout << endl;
    v.pop_back();
    v.push_back(6);
    for (it1 = v.begin(); it1 != v.end(); it1++)
    {
        cout << *it1 << " ";
    }
    cout << endl;
    v.erase(v.begin() + 2);
    for (it1 = v.begin(); it1 != v.end(); it1++)
    {
        cout << *it1 << " ";
    }
    cout << endl;
    map<int, string> mp = {{1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}};
    map<int, string>::iterator it2;
    cout << "Map: ";
    for (it2 = mp.begin(); it2 != mp.end(); it2++)
    {
        cout << it2->first << " " << it2->second << endl;
    }
    mp.erase(2);
    for (it2 = mp.begin(); it2 != mp.end(); it2++)
    {
        cout << it2->first << " " << it2->second << endl;
    }
    mp[6] = "six";
    for (it2 = mp.begin(); it2 != mp.end(); it2++)
    {
        cout << it2->first << " " << it2->second << endl;
    }
    return 0;
}