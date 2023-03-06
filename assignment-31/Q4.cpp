#include<iostream>
using namespace std;
 class person
 {
    protected:
    char name[50],address[100];
    long long phone_no;

 }; 

 class Employee :public person
 {
    public:
    int eno;
    char ename[30];
 };

 class Manager: public Employee
 {
    public:
    char designation[20],department_name[20];
    int basic_salary;

    public:
    void accept_details()
    {
        cout<<"\n Enter Details of Manager";
        cout<<"\n -----------------------------";
        cout<<"\n Enter Employee No.    :";
        cin>>eno;
        cout<<"\n Enter Name            :";
        cin>>ename;
        cout<<"\n Enter Address         :";
        cin>>address;
        cout<<"\n Enter phone no        :";
        cin>>phone_no;
        cout<<"\n Enter Designation     :";
        cin>>designation;
        cout<<"\n Enter department Name :";
        cin>>department_name;
        cout<<"\n Enter Basic salary    :";
        cin>>basic_salary;
    }
 };

 int main()
 {
    
    int i,cnt,temp;
    Manager man[100];

    cout<<"\n How many Managers you want to Enter? :";
    cin>>cnt;
    for(i=1;i<=cnt;i++)
    {
    man[i].accept_details();
    }

    temp=0;
    for(i=1;i<=cnt;i++)
    {
        if(man[temp].basic_salary<man[i].basic_salary)
        temp=i;
    }

    cout<<"\n MAnager with highest salary is :"<<man[temp].basic_salary;
    cout<<"\n And ,Manager Name is : "<<man[temp].ename;
    return 0;
 }