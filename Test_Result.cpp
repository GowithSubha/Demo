#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
    int roll_number;
    

public:
    void get_number(int);
    void put_number(void);
};
void student::get_number(int r)
{
    roll_number = r;
}
void student::put_number(void)
{
    cout << "\nRoll number is:\t\t" << roll_number << endl;
}
class test : public student
{
    protected:
        float sub1, sub2;
    public:
        void get_marks(float, float);
        void put_marks(void);
};
void test::get_marks(float s1, float s2)
{
    sub1 = s1;
    sub2 = s2;
}
void test::put_marks(void)
{
    cout << "Marks of subject 1:\t" << sub1 << endl;
    cout << "Marks of subject 2:\t" << sub2 << endl;
}
class result : public test
{
    private:
        float total;
    public:
        void display(void);
};
void result::display(void)
{
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout << "Total marks:\t\t" << total << endl;
}
int main()
{
    result student1;
    student1.get_number(2022);
    student1.get_marks(90, 80);
    student1.display();
    return 0;
}