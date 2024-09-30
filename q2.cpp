// Construct a C++ program that removes a specific character from a given string and
// return the updated string.
// Typical Input: computer science is the future
// Typical Output: compuer science is he fuure
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, updated_s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Enter the character to remove: ";
    char c;
    cin >> c;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != c)
        {
            updated_s += s[i];
        }
    }
    cout << "Updated string: " << updated_s << endl;
    return 0;
}