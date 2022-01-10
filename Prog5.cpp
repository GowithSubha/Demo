#include <bits/stdc++.h>
using namespace std;

class sum
{
private:
    int a, s, c;

public:
    void setdata();
    int getdata();
};
class product
{
private:
    int x, y, p;

public:
    void setdata();
    void getdata();
};

void product::setdata()
{
    cout << "Enter your number: \n";
    cin >> x;
}
void product::getdata()
{
    y = 1;
    while (x != 0)
    {
        p = x % 10;
        y = y * p;
        x = x / 10;
    }
    cout << "The product of digits is " << y << endl;
}

void sum::setdata()
{
    cout << "Enter your number: \n";
    cin >> a;
}
int sum::getdata()
{
    s = 0;
    while (a != 0)
    {
        c = a % 10;
        s = s + c;
        a = a / 10;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    {
        sum digits;
        digits.setdata();
        int c = digits.getdata();
        cout << "The sum of digits is " << c << endl;
    };

    {
        product number;
        number.setdata();
        number.getdata();
    };

    return 0;
}