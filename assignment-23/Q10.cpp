#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        a[i]=i+1;
    }
    
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum of array is "<<sum<<endl;
    return 0;
}