#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter two number"<<endl;
    cin>>x>>y;
    cout<<"Before swapping of numbers-: x = "<<x<<" , y= "<<y<<endl;
    x=x+y; //30
    y=x-y; //20
    x=x-y; //10
    cout<<"After swapping of numbers-: x = "<<x<<" , y= "<<y<<endl;
    return 0;
}