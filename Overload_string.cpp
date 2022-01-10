/*******************************************************
String operations using operator overloading in C++
*******************************************************/
#include <bits/stdc++.h>
using namespace std;

class overload_string
{
private:
    // character array to denote string
    char str[30];

public:
    // declarating the functions
    void input();
    void display();
    void operator + (overload_string);
    void operator == (overload_string);
    void operator < (overload_string);
    
};
void overload_string::input()
{
    cin>>str;
}
//function definition for show()
void overload_string::display()
{
   cout<<"\n"<<str;
}
//function definition for + operator
void overload_string::operator + (overload_string str2)
{
    cout<<"\nThe concatenated string is : ";
    cout<<str<<str2.str;
}
//function definition for == operator
void overload_string::operator == (overload_string str2)
{
    if(strcmp(str,str2.str)==0)
    {
        cout<<"\nThe strings are equal";
    }
    else
    {
        cout<<"\nThe strings are not equal";
    }
}
//function definition for < operator
void overload_string::operator < (overload_string str2)
{
    if(strcmp(str,str2.str)<0)
    {
        cout<<"\nThe first string is smaller"<<endl;
    }
    else
    {
        cout<<"\nThe second string is smaller"<<endl;
    }
}

int main()
{
    int ch, c;
    overload_string str1, str2;
    do
    {
        cout<<"\n**********MENU**********\n";
        
        cout<<"1. + operator\n";
        cout<<"2. == operator\n";
        cout<<"3. < operator\n";
        
        cout<<"4. Exit\n";
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\nEnter the first string : ";
                str1.input();
                cout<<"\nEnter the second string : ";
                str2.input();
                str1+str2;
                break;
            case 2:
                cout<<"\nEnter the first string : ";
                str1.input();
                cout<<"\nEnter the second string : ";
                str2.input();
                str1==str2;
                break;
            case 3:
                cout<<"\nEnter the first string : ";
                str1.input();
                cout<<"\nEnter the second string : ";
                str2.input();
                str1<str2;
                break;
            
            case 4:
                cout << "Thank you for using the program";
                break;
                
            default:
                cout<<"\nInvalid choice";
                cout << "Thank you for using the program";
        }
        
    } while (ch!=4);
    
    return 0;
}

