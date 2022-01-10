#include <bits/stdc++.h>
using namespace std;

class A
{
    int a;

public:
    void setdata();
    void calculate();
    friend A operator+(A, A);
    friend A operator-(A, A);
};

void A ::setdata()
{
    cout << "Enter the value of a: ";
    cin >> a;
}

void A ::calculate()
{
    cout << a << "\n";
}

A operator+(A ob1, A ob2)
{
    A temp;
    temp.a = ob1.a + ob2.a;
    return temp;
}
A operator-(A ob1, A ob2)
{
    A temp;
    temp.a = ob1.a - ob2.a;
    return temp;
}

int main()
{
    A ob1, ob2;
    ob1.setdata();
    ob2.setdata();

    cout << "The value of a in first object : ";
    ob1.calculate();

    cout << "The value of a in second object : ";
    ob2.calculate();

    int ch;
    do
    {
        cout << "\n\n1. Addition of two objects" << endl;
        cout << "2. Substitution of two objects" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            A ob3 = ob1 + ob2;
            cout << "\nThe value of a after calling operator overloading function + is : ";
            ob3.calculate();
            break;
        }
        case 2:
        {
            A ob3 = ob1 - ob2;
            cout << "\nThe value of a after calling operator overloading function - is : ";
            ob3.calculate();
            break;
        }
        case 3:
        {
            cout << "\tThank you for using this program." << endl;
            exit(0);
        }
        default:
        {
            cout << "Invalid choice" << endl;
        }
        }

    } while (ch != 3);
    return 0;
}