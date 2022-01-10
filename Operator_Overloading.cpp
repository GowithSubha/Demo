#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int x, y;
    void setdata();
    A operator+(A);
    A operator-(A);
    A operator*(A);
    A operator/(A);
    bool operator<(A);
    bool operator>(A);
    bool operator==(A);

};

void A::setdata()
{
    cout << "Enter the value of x and y: ";
    cin >> x >> y;
}
A A::operator+(A a)
{
    A b;
    b.x = x + a.y;
    return b;
}
A A::operator-(A a)
{
    A b;
    b.x = x - a.y;
    return b;
}
A A::operator*(A a)
{
    A b;
    b.x = x * a.y;
    return b;
}
A A::operator/(A a)
{
    A b;
    b.x = x / a.y;
    return b;
}
bool A::operator<(A a)
{
    if (x < a.y)
        return true;
    else
        return false;
}
bool A::operator>(A a)
{
    if (x > a.y)
        return true;
    else
        return false;
}
bool A::operator==(A a)
{
    if (x == a.y)
        return true;
    else
        return false;
}

int main()
{

    A a1;
    a1.setdata();
    A c;
    int ch;
    do
    {
        cout << "\nOperator Overloading\n";
        cout << "1. + operator overloading\n";
        cout << "2. - operator overloading\n";
        cout << "3. * operator overloading\n";
        cout << "4. / operator overloading\n";
        cout << "5. < operator overloading\n";
        cout << "6. > operator overloading\n";
        cout << "7. == operator overloading\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";

        cin >> ch;
        switch (ch)
        {
        case 1:
            c = a1 + a1;
            cout << "\nResult of + operator overloading: " << c.x << endl;
            break;
        case 2:
            c = a1 - a1;
            cout << "\nResult of - operator overloading: " << c.x << endl;
            break;
        case 3:
            c = a1 * a1;
            cout << "\nResult of * operator overloading: " << c.x << endl;
            break;
        case 4:
            c = a1 / a1;
            cout << "\nResult of / operator overloading: " << c.x << endl;
            break;
        case 5:
            if (a1 < a1)
            {
                cout << "\nResult of < operator overloading: "
                     << "\t1st value is less than 2nd value" << endl;
            }
            else
            {
                cout << "\nResult of < operator overloading: "
                     << "\t1st value is greater than 2nd value" << endl;
            }
            break;
        case 6:
            if (a1 > a1)
            {
                cout << "\nResult of > operator overloading: "
                     << "\t1st value is greater than 2nd value" << endl;
            }
            else
            {
                cout << "\nResult of > operator overloading: "
                     << "\t1st value is less than 2nd value" << endl;
            }
            break;
        case 7:
            if (a1 == a1)
            {
                cout << "\nResult of == operator overloading: "
                     << "\tYou entered two same values" << endl;
            }
            else
            {
                cout << "\nResult of == operator overloading: "
                     << "\tYou entered two different values" << endl;
            }
            break;
        case 8:
            cout << "\tThank you for using our program\n";
            exit(0);
        default:
            cout << "\nInvalid choice";
        }
    } while (ch != 9);
    return 0;
}
