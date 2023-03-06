#include <iostream>
using namespace std;

class student
{
protected:
    int sid;
    char sname[30];
};

class studentExam : public student
{
protected:
    float marks1, marks2, marks3, marks4, marks5, marks6;
};

class studentResult : public studentExam
{
public:
    float percentage, totalmarks;

    void input()
    {
        cout << "\n -------------------------------------- \n";
        cout << "\n Enter Roll No.                 : ";
        cin >> sid;
        cout << "\n Enter Student Name             : ";
        cin >> sname;
        cout << "\n Enter Marks for subject 1      : ";
        cin >> marks1;
        cout << "\n Enter Marks for subject 2      : ";
        cin >> marks2;
        cout << "\n Enter Marks for subject 3      : ";
        cin >> marks3;
        cout << "\n Enter Marks for subject 4      : ";
        cin >> marks4;
        cout << "\n Enter Marks for subject 5      : ";
        cin >> marks5;
        cout << "\n Enter Marks for subject 6      : ";
        cin >> marks6;
    }

    float total()
    {

        totalmarks = marks1 + marks2 + marks3 + marks4 + marks5 + marks6;
        return totalmarks;
    }

    void calculatePercentage()
    {
        percentage = (total() / 600.0) * 100.0;
    }

    void display()
    {
        cout << "\n ------------------------------------------ \n";
        cout << "\n ************* Student Marklist *********** \n";
        cout << "\n ------------------------------------------ \n";
        cout << "\n Roll No.                        : " << sid;
        cout << "\n Student Name                    : " << sname;
        cout << "\n";
        cout << "\n Marks of Subject 1              : " << marks1;
        cout << "\n Marks of Subject 2              : " << marks2;
        cout << "\n Marks of Subject 3              : " << marks3;
        cout << "\n Marks of Subject 4              : " << marks4;
        cout << "\n Marks of Subject 5              : " << marks5;
        cout << "\n Marks of Subject 6              : " << marks6;
        cout << "\n";
        cout << "\n Total Percentage                  : " << percentage;
        cout << "\n -------------------------------------------- \n";
    }
};

int main()
{
    int no_of_s, i;
    studentResult R[10];

    cout << "\n Enter No. of student You want? : ";
    cin >> no_of_s;

    for (i = 1; i <= no_of_s; i++)
    {
        R[i].input();
    }

    for (i = 1; i <= no_of_s; i++)
    {
        R[i].display();
    }
    return 0;
}