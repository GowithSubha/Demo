// Write a program to display the sum of the series S= 1+12+123+1234+12345.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, Sum = 0, p = 0;
    cout << "Sum of the series S= 1+12+123+1234+12345 \n";
    for (i = 1; i <= 5; i++)
    {
        p = p * 10 + i;
        Sum = Sum + p;
        // cout << Sum << endl;
    }
    cout << "The sum of this series is: " << Sum << endl;

    return 0;
}