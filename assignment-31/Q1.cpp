#include<iostream>
#include<string.h>
using namespace std;

class person
{
protected :
string name;
int age;

public:
void setName(string n)
{
    name=n;
}
void setAge(int a)
{
    age =a;
}
string getName()
{
    return name;
}
int getAge()
{
    return age;
}
};

class Employee: public person
{
int empId;
int salary;

public:
void setId(int id)
{
    empId=id;
}
void setsalaray(int s)
{
    salary=s;
}
int getId()
{
    return empId;
}
int getsalary()
{
    return salary;
}

void display()
{
    cout<<"Name= "<<name<<" Age= "<<age<<" Empid= "<<empId<<" salary= "<<salary<<endl;
}

};
int main()
{
    Employee e;
    e.setName("Abhishek");
    e.setAge(20);
    e.setId(133);
    e.setsalaray(1000);

    e.display();
    return 0;
}