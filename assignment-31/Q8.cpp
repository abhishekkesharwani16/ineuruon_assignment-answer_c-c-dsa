#include<iostream>
using namespace std;

class Customer
{
  public:
  char cname[20];
  long long cphone_no;
};

class Depositor :public Customer
{
    public:
    long long accno;
    int balance;

};

class Borrower : public Depositor
{
    public:
    int loan_no;
    int loan_amt;

    void input()
    {
        cout<<"\n Enter Customer Name     : ";
        cin>>cname;
        cout<<"\n Enter Customer Phone no.: ";
        cin>>cphone_no;
        cout<<"\n Enter Customer A/c No.  : ";
        cin>>accno;
        cout<<"\n Enter Balance           : ";
        cin>>balance;
        cout<<"\n Enter Loan No.          : ";
        cin>>loan_no;
        cout<<"\n Enter Loan Amount       : ";
        cin>>loan_amt;
        cout<<"\n -------------------------------------- \n";

    }

    void display()
    {
        cout<<"\n Details of Customer \n";
        cout<<"\n ---------------------------------------------- \n";
        cout<<"\n Customer Name                  : "<<cname;
        cout<<"\n Customer Phone No.             : "<<cphone_no;
        cout<<"\n Customer A/c No.               : "<<accno;
        cout<<"\n Balance                        : "<<balance;
        cout<<"\n ---------------------------------------------- \n";
        cout<<"\n Loan No.                       : "<<loan_no;
        cout<<"\n Loan Amount                    : "<<loan_amt;
        cout<<"\n ---------------------------------------------- \n";


    }
};

int main()
{
    int i,cnt,cd;
    Borrower b[10];

    cout<<"\n Enter No. of Customer Details you want : ";
    cin>>cd;
    for(i=0; i<=cd; i++)
    {
      b[i].input();
    }

    for(i=0; i<=cd; i++)
    {
        b[i].display();
    }

    return 0;
}