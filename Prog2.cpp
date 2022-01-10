#include<bits/stdc++.h>
using namespace std;
class swap2
{
    public:
    int a,b,temp;
    void input()
    {
        cout << "==========================================================Swap two numbers================================================================\n";
        cout << "================================================================MENU================================================================\n";
        cout << "Press 0 ==> Swap two numbers using third variable\n";
        cout << "Press 1 ==> Swap two numbers without using third variable\n";
        cout << "press your key: \n";
        cin >> temp;

    }
    void cal()
    {
        if (temp == 0)
        {
            cout << "You choose ==> Swap two numbers using third variable\n";
            cout << "Enter 1st number: \n";
            cin >> a ;
            cout << "Enter 2nd number: \n";
            cin >> b ;
            temp = a;
            a = b;
            b = temp;
            // cout<<"after swaping the 1st number is: " << a << "\n" <<"after swaping the 2nd number is: " << b ; 
        }

        else if ( temp == 1)
        {
            cout << "You choose ==> Swap two numbers without using third variable\n";
            cout << "Enter 1st number: \n";
            cin >> a ;
            cout << "Enter 2nd number: \n";
            cin >> b ;
            a = a+b;
            b = a-b;
            a = a-b;
            // cout<<"after swaping the 1st number is: \n" << a <<"after swaping the 2nd number is: \n" << b ;
        }
        
        else
        {
            cout << "Please press correct key to continue";
        }
        
    
    } 

    void output ()
    {
        cout<<"after swaping the 1st number is: " << a << "\n" <<"after swaping the 2nd number is: " << b ;
    }      
    
    
};
int main()
{
    swap2 ob;
    ob.input();
    ob.cal();
    ob.output();
    return 0;
}