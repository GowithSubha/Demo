// Write a program to display sum of the series S=1+x +x2/2! +x3/3! +x4/4! +x5/5! + x6/6!, where the value of x is given by the user.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float p = 1, t = 1;
    int i, x;
    cout << "Sum of this series S = 1 +x +x^2/2! +x^3/3! +x^4/4! +x^5/5! \n";
    cout << "Enter the value of x: ";
    cin >> x;
    for (i = 1; i <= 5; i++)
    {
        t = t * x / i;
        p = p + t;
    }
    cout << "The sum of this series: " << p << endl;

    return 0;
}