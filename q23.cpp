// The task is to debug the existing code to successfully execute all provided test files.
// You are required to extend the existing code so that it handles the
// std::invalid_argument exception properly. More specifically, you have to extend the
// implementation of the process_input function. It takes integer n as an argument and
// has to work as follows:
// 1.It calls function largest_proper_divisor(n).
// 2.If this call returns a value without raising an exception, it should print in a single
// line result=d where d is the returned value.
// 3.Otherwise, if the call raises an invalid_argument exception, it has to print in a
// single line the string representation of the raised exception, i.e., its message.
// 4.Finally, no matter if the exception is raised or not, it should print in a single line
// returning control flow to the caller after any other previously printed output.
// Input Format
// The input is read by the provided locked code template. In the only line of the input,
// there is a single integer n, which is going to be the argument passed to function
// process input.
// Output Format
// The output should be produced by the function process_input as described in the
// statement.
// Sample Input
// 0
// Sample Output
// the largest proper divisor is not defined for n=0
// returning control flow to the caller
// Explanation 1
// In the first sample, n = 0, so the call largest_proper_divisor(0) raises an exception.
// In this case, the function process_input prints two lines. In the first of them, it prints
// the string representation of the raised exception, and in the second line, it prints
// returning control flow to the caller.
// Sample Input
// 9
// Sample Output
// result=3
#include <bits/stdc++.h>
using namespace std;

int largest_proper_division(int n)
{
    if (n == 1 || n == 0)
    {
        throw invalid_argument("the largest proper divisor is not defined for n=0");
        return -1;
    }
    if (n == 1)
    {
        throw invalid_argument("the largest proper divisor is not defined for n=1");
        return -1;
    }
    if (n % 2 == 0)
    {
        return n / 2;
    }
    int tmp = n, i = n / 2;
    for (; i > 0; i--)
    {
        if (tmp % i == 0)
        {
            break;
        }
    }
    return i;
}
void process_input(int n)
{
    try
    {
        int x;
        x = largest_proper_division(n);
        if (x != -1)
        {
            cout << "result=" << x << endl;
        }
    }
    catch (invalid_argument err)
    {
        cout << err.what() << endl;
    }
    cout << "returning control flow to the caller " << endl;
}

int main()
{
    int n;
    cin >> n;
    process_input(n);
    return 0;
}