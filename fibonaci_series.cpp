// FibonaciSeries
#include <bits/stdc++.h>
using namespace std;
class FibonaciSeries
{
    private:
        int n;
        int a, b;
    public:
        void get_n(int);
        void put_n(void);
        void put_series(void);
};
void FibonaciSeries::get_n(int n)
{
    this->n = n;
}
void FibonaciSeries::put_n(void)
{
    cout << "The Fibonaci series is: " << endl;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}
void FibonaciSeries::put_series(void)
{
    cout << "Enter the value of n: ";
    cin >> n;
    a = 0;
    b = 1;
    get_n(n);
    put_n();
}
int main()
{
    FibonaciSeries fibonaci;
    fibonaci.put_series();
    return 0;
}