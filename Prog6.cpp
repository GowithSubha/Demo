#include <bits/stdc++.h>
using namespace std;

class reverse_num
{
private:
    int num, rev = 0, remainder;

public:
    void setdata();
    void getdata();
};
class factorial
{
private:
    int c, num1, f = 1;

public:
    void setdata();
    void getdata();
};
class armstrong
{
private:
    int n, r, sum = 0, temp;

public:
    void setdata();
    void getdata();
};

void armstrong::setdata()
{
    cout << " \n ================= Check the number is armstrong or not =================" << endl;
    cout << "enter the number= ";
    cin >> n;
}
void armstrong::getdata()
{
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "Its an armstrong  number " << endl;
    }
    else
    {
        cout << "Its not an armstrong number" << endl;
    }
}

void factorial::setdata()
{
    cout << " \n ================= Calculate factorial of the number =================" << endl;
    cout << "Enter a number to calculate its factorial \t";
    cin >> num1;
}
void factorial::getdata()
{
    for (c = 1; c <= num1; c++)
    {
        f = f * c;
    }
    cout << "The factorial is " << f << endl;
}

void reverse_num::setdata()
{
    cout << " \n ================= Reverse of the number =================" << endl;
    cout << "Enter the number: ";
    cin >> num;
}
void reverse_num::getdata()
{
    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
    }
    cout << "Reversed number = " << rev << endl;
}

int main(int argc, char const *argv[])
{
    {
        factorial A;
        A.setdata();
        A.getdata();
    }

    {
        reverse_num B;
        B.setdata();
        B.getdata();
    }

    {
        armstrong C;
        C.setdata();
        C.getdata();
    }
    return 0;
}