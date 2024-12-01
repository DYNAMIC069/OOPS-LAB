// Write a program to read and write from / to a file(char by char, word by word and line by line).
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fs;
    fs.open("file.txt", ios::out);
    char ch;
    cout << "Enter characters (1 to exit): ";
    cin >> ch;
    while (ch != '1')
    {
        fs << ch << " ";
        cin >> ch;
    }
    string word;
    cout << "Enter word(-1 to exit): ";
    cin >> word;
    while (word != "-1")
    {
        fs << word << " ";
        cin >> word;
    }
    string line;
    cout << "Enter line(-1 to exit): ";
    cin.ignore();
    getline(cin, line);
    while (line != "-1")
    {
        fs << line << endl;
        getline(cin, line);
    }
    fs.close();
    cout << endl;
    fs.open("file.txt", ios::in);
    cout << "\nReading from file (characters):" << endl;
    while (fs.get(ch))
    {
        cout << ch;
    }
    cout << endl;

    fs.clear();
    fs.seekg(0, ios::beg);
    cout << "\nReading from file (words):" << endl;
    while (fs >> word)
    {
        cout << word << " ";
    }
    cout << endl;
    fs.clear();
    fs.seekg(0, ios::beg);
    cout << "\nReading from file (lines):" << endl;
    while (getline(fs, line))
    {
        cout << line << endl;
    }
    fs.close();
    return 0;
}