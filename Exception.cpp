// write a program containing exception use try block to throw exception and catch block handle its properties.
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter the two numbers: " << endl;
    cin >> a >> b;
    int c = a - b;
    try
    {
        if (c != 0)
        {
            cout << "The result is (a/c): " << a / c << endl;
        }
        else
        {
            throw(c);
        }
    }
    catch (int i)
    {
        cout << "Exception caught: c = " << c << endl;
        cout << "Divided by zero error " << endl;
    }
    cout << "Thank you for using our program" << endl;

    return 0;
}
