#include<iostream>
using namespace std;
class A
{
    public:
    int num;
    void get ()
    {
        cout <<"enter the number: \n";
        cin >> num;
       
    }
    void cal()
    {
        if((num %2) == 0 )
        {
            cout <<"The number " <<num << " is even.";
        }
        else
        {
            cout <<"The number " <<num << " is odd.";
        }
    }
};


int main(int argc, char const *argv[])
{
    A ob;
    ob.get();
    ob.cal();

return 0;
}