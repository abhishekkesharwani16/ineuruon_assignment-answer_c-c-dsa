#include<iostream>
using namespace std;

class Addition
{
    public:
    int x,y;

Addition()
{

}

Addition (int a, int b)
{
    x=a;
    y=b;
}

 int add();
};

int Addition :: add()
{
    return x+y;
}

int main()
{
    int x,y;
cout<<"enter two numbers"<<endl;
cin>>x>>y;
Addition a=Addition(x,y);
int p=a.add();
cout<<"----------------------------"<<endl;
cout<<"Addition of "<<a.x<<" and "<<a.y<<" is => "<<p<<endl;
cout<<"----------------------------";


    return 0;
}