#include <bits/stdc++.h>
using namespace std;
class withoutRP
{
private:
    float M1, M2, M3, M4, M5, average;

public:
    void setdata();
    void grade_calculations();
};

class withR
{
private:
    float M1, M2, M3, M4, M5, average;

public:
    float setdata();
    float grade_calculations();
};

// class withRP
// {
// private:
//     float M1, M2, M3, M4, M5, average;
// public:
//     float setdata(float Marks1, float Marks2,float Marks3, float Marks4, float Marks5);
//     void getdata();

// };

// float withRP::setdata(float Marks1, float Marks2,float Marks3, float Marks4, float Marks5)
// {
//     M1 = Marks1;
//     M2 = Marks2;
//     M3 = Marks3;
//     M4 = Marks4;
//     M5 = Marks5;
// }

// void withRP::getdata()
// {

// }

float withR::setdata()
{
    cout << "Enter the 1st subject marks: " << endl;
    cin >> M1;
    cout << "Enter the 2nd subject marks: " << endl;
    cin >> M2;
    cout << "Enter the 3rd subject marks: " << endl;
    cin >> M3;
    cout << "Enter the 4th subject marks: " << endl;
    cin >> M4;
    cout << "Enter the 5th subject marks: " << endl;
    cin >> M5;
}
float withR::grade_calculations()
{
    average = (M1 + M2 + M3 + M4 + M5) / 5;
    cout << "Average: " << average << endl;
    if (average >= 90)
    {
        return 1;
    }
    else if (average >= 80)
    {
        return 2;
    }
    else if (average >= 70)
    {
        return 3;
    }
    else if (average >= 60)
    {
        return 4;
    }
    else if (average >= 50)
    {
        return 5;
    }
    else if (average >= 40)
    {
        return 6;
    }
    else
    {
        return 7;
    }
}

void withoutRP::setdata()
{
    cout << "Enter the 1st subject marks: " << endl;
    cin >> M1;
    cout << "Enter the 2nd subject marks: " << endl;
    cin >> M2;
    cout << "Enter the 3rd subject marks: " << endl;
    cin >> M3;
    cout << "Enter the 4th subject marks: " << endl;
    cin >> M4;
    cout << "Enter the 5th subject marks: " << endl;
    cin >> M5;
}

void withoutRP::grade_calculations()
{
    average = (M1 + M2 + M3 + M4 + M5) / 5;
    cout << "Average: " << average << endl;

    if (average >= 90)
    {
        cout << "Your grade= O\n";
    }
    else if (average >= 80)
    {
        cout << "Your grade= E\n";
    }
    else if (average >= 70)
    {
        cout << "Your grade= A\n";
    }
    else if (average >= 60)
    {
        cout << "Your grade= B\n";
    }
    else if (average >= 50)
    {
        cout << "Your grade= C\n";
    }
    else if (average >= 40)
    {
        cout << "Your grade= D\n";
    }
    else
    {
        cout << "Fail \nTry to be better on next time :): \n";
    }
}

int main(int argc, char const *argv[])
{

    {
        withoutRP grade;
        grade.setdata();
        grade.grade_calculations();
    }

    {
        withR gradeR;
        gradeR.setdata();
        float avg = gradeR.grade_calculations();
        if (avg == 1)
        {
            cout << "Your grade= O\n";
        }
        else if (avg == 2)
        {
            cout << "Your grade= E\n";
        }
        else if (avg == 3)
        {
            cout << "Your grade= A\n";
        }
        else if (avg == 4)
        {
            cout << "Your grade= B\n";
        }
        else if (avg == 5)
        {
            cout << "Your grade= c\n";
        }
        else if (avg == 6)
        {
            cout << "Your grade= D\n";
        }
        else
        {
            cout << "Fail \nTry to be better on next time :): \n";
        }
    }

    return 0;
}