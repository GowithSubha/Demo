// Runtime polymorhism
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void disp()
    {
        cout << "Super Class Function" << endl;
    }
};
class B : public A
{
public:
    void disp()
    {
        cout << "Sub Class Function";
    }
};
int main()
{
    A obj;
    obj.disp();
    B obj2;
    obj2.disp();
    return 0;
}