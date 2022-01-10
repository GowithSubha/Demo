#include <bits/stdc++.h>
using namespace std;

class BOOKS
{
    char author[20];
    char title[20];
    int price;
    int quantity;
        
public:
    void book();
    void insertdata();
    void displaydata();
    int search(char[], char[]);
    void no_copies(int);
};

void BOOKS::book()
{
    char *author = new char[20];
    char *title = new char[20];
    int price = 0;
    int quantity = 0;
}

void BOOKS::insertdata()
{
    cout << "Enter the author name: ";
    cin >> author;
    cout << "Enter the title: ";
    cin >> title;
    cout << "Enter the price: ";
    cin >> price;
    cout << "Enter the quantity: ";
    cin >> quantity;
}

void BOOKS::displaydata()
{
    cout << "Author name: " << author << endl;
    cout << "Title: " << title << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
}

int BOOKS::search(char author[], char title[])
{
    if (strcmp(author, this->author) == 0 && strcmp(title, this->title) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void BOOKS::no_copies(int n)
{
    if (quantity >= n)
    {
        cout << "\n Book is available";
        cout << "\n Total cost of " << n << " Books is Rs." << (price * n);
    }
    else
    {
        cout << "Required copies not in stock." << endl;
    }
}

int main()
{
    BOOKS b[10000];
    int ch, n, i, flag = 0, copies, key = 0;
    char author[20], title[20];
    do
    {

        cout << "\n************ BOOK SHOP *******************";
        cout << "\n1. Insert Book Details";
        cout << "\n2. Display Book";
        cout << "\n3. Search Book";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "\nHow many books data you want to enter : ";
            cin >> n;
            for (i = 0; i < n; i++)
            {
                b[i].insertdata();
            }
            break;
        case 2:
            for (i = 0; i < n; i++)
            {
                b[i].displaydata();
            }
            break;
        case 3:
            cout << "\nEnter the author name: ";
            cin >> author;
            cout << "\nEnter the title: ";
            cin >> title;
            for (i = 0; i < n; i++)
            {
                if (b[i].search(author, title) == 1)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "\nBook is available";
                cout << "\nPlease enter the number of copies you want: ";
                cin >> copies;
                b[i].no_copies(copies);
            }
            else
            {
                cout << "\nBook is not available";
            }
            break;
        case 4:
            exit(EXIT_SUCCESS);
        default:
            cout << "\nInvalid choice";
        }
    } while (ch != 5);

    return 0;
}