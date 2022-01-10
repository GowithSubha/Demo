// Matrix multiplication using dynamic memory allocation.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, o;
    int **a, **b, **c;
    int i, j, k;
    cout << "Enter the number of rows and columns of matrix 1: ";
    cin >> m >> n;
    cout << "Enter the number of columns of matrix 2: ";
    cin >> o;
    if (n != o)
    {
        cout << "Matrices cannot be multiplied" << endl;
        return 0;
    }

    a = new int *[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new int[n];
    }

    b = new int *[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = new int[o];
    }

    c = new int *[m];
    for (int i = 0; i < m; i++)
    {
        c[i] = new int[o];
    }

    cout << "Enter the elements of matrix 1: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of matrix 2: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "The elements of matrix 1: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "\t" << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "The elements of matrix 2: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            cout << "\t" << b[i][j] << "\t";
        }
        cout << endl;
    }
    // multiplication of matrices
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < o; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "\nThe result of the matrix multiplication: " << endl;
    // Print the resultant matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            cout << "\t" << c[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}