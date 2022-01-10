// Write a program to calculate the sum of the series S = 1+22+333+4444+55555.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, s = 0, p = 0, t = 0;
    cout << "Sum of the series S= 1 + 22 + 333 + 4444 + 55555 " << endl;
    for (i = 1; i <= 5; i++)
    {
        p = p * 10 + 1;
        s = i * p;
        t = t + s;
        // cout << t << endl;
    }
    cout << "The sum of this series: " << t << endl;

    return 0;
}