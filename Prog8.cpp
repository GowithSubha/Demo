#include<bits/stdc++.h>
using namespace std;
class max2
{
private:
    int a, b, c;

public:
    void setdata(void);
    void getdata(void);
    
};

void max2::setdata()
{
    cout << " ============ Find Maximum among two numbers ============ " << endl;
    cout << "Enter your two numbers: " << endl;
    cin >> a >> b;
}

void max2::getdata()
{
    c = a>b ? a : b;
    cout << c << " is the maximum number." << endl;
}

class max3
{
private:
    int a, b, c, d, e;

public:
    void setdata(void);
    void getdata(void);
    
};

void max3::setdata()
{
    cout << " \n ============ Find Maximum & minimum value among three numbers ============ " << endl;
    cout << "Enter your three numbers: " << endl;
    cin >> a >> b >> c;
}

void max3::getdata()
{
    d = a>b ? a>c ? a : c : b>c ? b : c;
    cout << d << " is the maximum number." << endl;
    
    e = a<b ? a<c ? a : c : b<c ? b : c;
    cout << e << " is the minimum number." << endl;
}

int main(int argc, char const *argv[])
{
    {
        max2 num;
        num.setdata();
        num.getdata();
    }

    {
        max3 NUM;
        NUM.setdata();
        NUM.getdata();
    }

return 0;
}