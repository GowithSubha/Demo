#include<bits/stdc++.h>
using namespace std;

class BANK 
{   public:
    int acc_no;
    char cust_name[50];
    float balance;
    

    void getdata()
    {
        cout<<"Enter the account number: ";
        cin>>acc_no;
        cout<<"Enter Account holders name: ";
        cin>>cust_name;
        cout<<"Enter the balance: ";
        cin>>balance;
    }
    void display()
    {
        cout<<"Account number: "<<acc_no<<endl;
        cout<<"Name: "<<cust_name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    void deposit()
    {
        float amt;
        cout<<"Enter the amount to be deposited: ";
        cin>>amt;
        balance+=amt;
        cout<<"\nAmount deposited successfully";
        cout<<"\nNew balance: "<<balance;
    }

    void withdraw()
    {
        float amt;
        cout<<"Enter the amount to be withdrawn: ";
        cin>>amt;
        if(amt>balance)
        {
            cout<<"\nInsufficient balance";
        }
        else
        {
            balance-=amt;
            cout<<"\nAmount withdrawn successfully";
            cout<<"\nNew balance: "<<balance;
        }
    }

    
};

int main()
{
    BANK b[50];
    int n,ch,i;
    cout<<"Enter the number of accounts you want to enter: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter the details of account "<<i+1<<endl;
        b[i].getdata();
    }


    do
    {
        level:

        cout<<"\nEnter the account number: ";
        cin>>ch;
        int i;
        for(i=0;i<n;i++)
        {
            if(ch==b[i].acc_no)
            {
                b[i].display();
                break;
            }
            
        }
        if(ch!=b[i].acc_no)
        {
            cout<<"\nAccount number not found";
            goto level;
        }
        
        cout<<"\n1. Deposit";
        cout<<"\n2. Withdraw";
        cout<<"\n3. Exit";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                b[i].deposit();
                break;
            case 2:
                b[i].withdraw();
                break;
            case 3:
                break;
            default:
                cout<<"\nInvalid choice";
        }
    }while(ch!=3);
    return 0;
}



//     for(int i=0;i<10;i++)
//     {
//         b[i].getdata();
//     }

//     for(int i=0;i<10;i++)
//     {
//         b[i].display();
//     }

//     int ch;
//     cout<<"\nEnter the account number: ";
//     cin>>ch;
//     for(int i=0;i<10;i++)
//     {
//         if(b[i].acc_no==ch)
//         {
//             b[i].deposit();
//             b[i].withdraw();
//             // b[i].transfer();
//             // b[i].interest();
//         }
//     }



//     return 0;
// }
//     int ch;
//     do
//     {
//         cout<<"\n1. Create Account";
//         cout<<"\n2. Display Account";
//         cout<<"\n3. Deposit";
//         cout<<"\n4. Withdraw";
//         // cout<<"\n5. Transfer";
//         // cout<<"\n6. Interest";
//         cout<<"\n7. Exit";
//         cout<<"\nEnter your choice: ";
//         cin>>ch;
//         switch(ch)
//         {
//             case 1: b.getdata();
//                     break;
//             case 2: b.display();
//                     break;
//             case 3: b.deposit();
//                     break;
//             case 4: b.withdraw();
//                     break;
//             // case 5: b.transfer();
//             //         break;
//             // case 6: b.interest();
//             //         break;
//             case 7: break;
//             default: cout<<"\nInvalid choice";
//         }
//     }while(ch!=7);
//     return 0;
// }


// Output:
// Enter the account number: 123
// Enter Account holders cust_name: John
// Enter the balance: 10000
// 1. Create Account
// 2. Display Account
// 3. Deposit
// 4. Withdraw
// 5. Transfer
// 6. Interest
// 7. Exit
// Enter your choice: 1
// Enter the account number: 123
// Enter Account holders cust_name: John
// Enter the balance: 10000
// 1. Create Account
// 2. Display Account   
// 3. Deposit
// 4. Withdraw
// 5. Transfer
// 6. Interest
// 7. Exit
// Enter your choice: 2
// Account number: 123
// Name: John
// Balance: 10000
// 1. Create Account
// 2. Display Account
// 3. Deposit
// 4. Withdraw
// 5. Transfer
// 6. Interest
// 7. Exit
// Enter your choice: 3
// Enter the amount to be deposited: 5000
//
// Amount deposited successfully
//
// New balance: 15000
// 1. Create Account
// 2. Display Account
// 3. Deposit
// 4. Withdraw
