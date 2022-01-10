// Write a program to display the sum of series S = 1 + X^2 + X^3 + X^4 + X^5.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int s = 1, X, i = 1;
    cout << "Calculate the sum of Series: 1 +x^2 +x^3 +x^4 +x^5 \n";
    cout << "Enter the value of X: ";
    cin >> X;
    for (i = 2; i <= 5; i++)
    {
        s = s + pow(X, i);
        // cout << s << endl;
    }

    cout << s;
    return 0;

}