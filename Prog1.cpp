#include<bits/stdc++.h>
using namespace std;
class Add
{
public:
    int a,b,c;
    void get ()
    {
         cout << "Enter the two numbers \n";
         cin >> a >>b;
    }
    void cal ()
    {
        c = a+b;
        cout << "The addition \n" << c;
    }
};



int main(int argc, char const *argv[])
{       
        // #ifndef ONLINE_JUDGE
        //     freopen("input.txt", "r", stdin);
        //     freopen("output.txt", "w", stdout);
        // #endif
    Add ob;
    ob.get();
    ob.cal();
return 0;
}