#include <iostream>
using namespace std;

class Base
{
protected:
    float marks1, marks2, marks3;

public:
    void input()
    {
        cout << "Enter marks of three sub--->" << endl;
        cin >> marks1 >> marks2 >> marks3;
    }
};

class Derived : public Base
{
protected:
    float total;

public:
    void totalMarks()
    {
        total = marks1 + marks2 + marks3;
    }
};

class perchantage : public Derived
{
protected:
    float percantage;

public:
    void calculatePerchantage()
    {
        percantage = (total / 300) * 100;
    }
    void display()
    {
        cout << "Percentage = " << percantage << endl;
    }
};

int main()
{
    perchantage p;
    p.input();
    p.totalMarks();
    p.calculatePerchantage();

    p.display();
    return 0;
}