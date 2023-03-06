#include <iostream>
using namespace std;

class Employee
{
public:
    int Emp_code;
    char Empname[30];

    void set()
    {
        cout << "\n Enter Employee No     :";
        cin >> Emp_code;
        cout << "\n Enter Employee Name   :";
        cin >> Empname;
    }
};

class Fulltime : public Employee
{
public:
    float daily_rate;
    int number_of_days;
    int salary;

    void setdata1()
    {
        cout << "\n Enter Daily rate      :";
        cin >> daily_rate;
        cout << "\n Enter NO of days      :";
        cin >> number_of_days;
    }

    void cal1()
    {
        salary = daily_rate * number_of_days;
        cout << "\n salary :   " << salary;
    }

    void show1()
    {
        cout << "\n ------------------------------\n";
        cout << "\n Employee Number      : " << Emp_code;
        cout << "\n Employee Name        : " << Empname;
        cout << "\n salary               : " << salary;
        cout << "\n status               :  Fulltime";
        cout << "\n ----------------------------------\n";
    }
};

class parttime : public Employee
{
public:
    int hourly_rate;
    int working_hours;
    int salary2;

    void setdata2()
    {
        cout << "\n Enter Hourly Rate    :";
        cin >> hourly_rate;
        cout << "\n Enter working hours  :";
        cin >> working_hours;
    }

    void cal2()
    {
        salary2 = hourly_rate * working_hours;
        cout << "\n salary :   " << salary2 << endl;
    }

    void show2()
    {
        cout << "\n --------------------------------\n";
        cout << "\n Employee Number      : " << Emp_code;
        cout << "\n Employee Name        : " << Empname;
        cout << "\n salary               : " << salary2;
        cout << "\n status               :  Parttime";
        cout << "\n ----------------------------------\n";
    }
};

int main()
{
    int var1 = 0;
    int var2 = 0;
    Fulltime f1[5];
    parttime p1[5];

    int x, i;
    do
    {
        cout << "\n";
        cout << "\n 1.Enter Record";
        cout << "\n 2.Display Record";
        cout << "\n 3.search Record";
        cout << "\n 4.Quit";
        cout << "\n\n Enter your choice : ";
        cin>>x;

        switch (x)
        {
        case 1:
            int y;
            cout << "\n 1.Fulltime Employee";
            cout << "\n 2.Parttime Employee \n";
            cout << "\n Enter : ";
            cin >> y;
            switch (y)
            {
            case 1:
                f1[var1].set();
                f1[var1].setdata1();
                f1[var1].cal1();
                var1++;
                break;

            case 2:
                p1[var2].set();
                p1[var2].setdata2();
                p1[var2].cal2();
                var2++;
                break;
            }
            break;
        case 2:
            for (i = 0; i < var1; i++)
            {
                f1[i].show1();
            }
            for (i = 0; i < var2; i++)
            {
                p1[i].show2();
            }
            break;
        case 3:
            int a;
            cout << "\n Enter Employee No. : ";
            cin >> a;
            for (i = 0; i < var1; i++)
            {
                if (f1[i].Emp_code == a)
                {
                    f1[i].show1();
                }
                if (p1[i].Emp_code == a)
                {
                    p1[i].show2();
                }
            }
        }

    } 
    while (x != 4);
    return 0;
}
