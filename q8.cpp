// Anna is a contender for valedictorian of her high school. She wants to know how
// many students (if any) have scored higher than her in the exams given during this
// semester.
// Create a class named Student with the following specifications:
// ➢ An instance variable named scores holds a student's 5 exam scores.
// ➢ A void input () function reads 5 integers and saves them to scores.
// ➢ An int calculateTotalScore() function that returns the sum of the student's
// scores.
// Input Format
// In the void Student::input() function, you must read 5 scores from standard input
// and save them to your scores instance variable.
// Output Format
// In the int Student::calculateTotalScore() function, you must return the student's total
// grade (the sum of the values in scores).
// The code in the editor will determine how many scores are larger than Anna’s and
// print that number to the console.
// Sample Input
// The first line contains n, the number of students in Anna’s class. The n subsequent
// lines contain each student's 5 exam grades for this semester.
// 3
// 30 40 45 10 10
// 40 40 40 10 10
// 50 20 30 10 10
// Sample Output
// 1
#include <iostream>
using namespace std;

class xyz
{

private:
    int m[5];

public:
    void input(int mk[5])
    {
        for (int i = 0; i < 5; i++)
        {
            m[i] = mk[i];
        }
    }
    int calculateTotalScore()
    {
        int totalM = 0;
        for (int i = 0; i < 5; i++)
        {
            totalM += this->m[i];
        }
        return totalM;
    }
};

int main()
{
    cout << "no of sudents" << endl;
    int n;
    cin >> n;
    xyz s[n];
    int tmp[5];
    for (int i = 0; i < n; i++)
    {
        cout << "enter five marks" << endl;
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            tmp[j] = x;
        }
        s[i].input(tmp);
    }
    int ans = 0;
    int annaSCore = s[0].calculateTotalScore();
    for (int i = 1; i < n; i++)
    {
        int t = s[i].calculateTotalScore();
        if (annaSCore < t)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}