#include<iostream>
#include<ostream>
#include<cmath>
#include<process.h>

using namespace std;

class account
{
    public:
    char name[30];              // Declaration of data members
    char account_type[30];      // Declaration of data members
    int account_number;         // Declaration of data members
    int balance;                // Declaration of data members

    // Member function of the class account 
    
    void initialize()           //initialize function to initialize data members 
    {
        cout<<endl<<"ENTER ACCOUNT HOLDERS NAME  :";
        gets(name);
        cout<<endl<<"ENTER ACCOUNT TYPE  :";
        gets(account_type);
        cout<<endl<<"ENTER ACCOUNT NUMBER  :";
        cin>>account_number;
        cout<<endl<<"ENTER BALANCE TO DEPOSIT  :";
        cin>>balance;

    }

    void deposit()            //deposite()function to deposite amount in account
    {
        int bal;
        cout<<endl<<"ENTER THE AMOUNT TO DEPOSITE :";
        cin>>bal;
        balance+=bal;
        cout<<endl<<" AMOUNT DEPOSITED SUCCESSFULY "<<endl<<"YOUR NEW BALANCE :"<<balance;

    }

    void check()            //check()function to withdraw amount and check remaining balance
    {
        int bal;
        cout<<endl<<"YOUR BALANCE :"<<balance<<endl;
        cout<<"ENTER AMOUNT TO WITHDRAW :";
        cin>>bal;
        if(bal<=balance)
        {
            balance-=bal;
            cout<<endl<<"REMAINING BALANCE :"<<balance;
        }
        else
        {
            cout<<endl<<"YOU HAVE UNSUFICIANT BALANCE ";
        }

    }

    void display()           //Display() function to display user information
    {
        cout<<endl<<"NAME :";
        puts(name);
        cout<<endl<<"BALANCE :"<<balance;
    }

};
int main()
{
    int i=1,j;
    
    account bk;
    bk.initialize();
    cout<<endl<<"0. Your information ";
    cout<<endl<<"1. Deposit ";
    cout<<endl<<"2. Withdraw ";
    cout<<endl<<"Enter Your choice "<<endl;
    cin>>j;
    if(i>j)
    {
        bk.display();
    }
    else if(i<j)
    {
        bk.check();
    }
    else
    {
        bk.deposit();
    }

    

}