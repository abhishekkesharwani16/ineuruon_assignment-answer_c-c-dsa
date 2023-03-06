#include<iostream>
using namespace std;
class B;
class A
{   private:
    int num1;
    public:
    A()
    {
       num1=10;
    }
    void show()
    {
        cout<<"\n Value of number 1 : "<<num1;

    }
   friend void swap(A &num1,B &num2);
   
};
class B
{   private:
    
    int num2;
    
    public:
    B()
    {
       num2=20;
    }
     void show()
    {
        cout<<"\n Value of number 2 : "<<num2;
        
    }
    friend void swap(A &num1,B &num2);
};

void swap(A &no1,B &no2)
{
    int no3;
    no3=no1.num1;
    no1.num1=no2.num2;
    no2.num2=no3;
}

int main()
{
    A a;
    B b;
    cout<<"\n before swapping the values is-----> ";
    a.show();
    b.show();
    cout<<"\n -----------------------------------";
     cout<<"\n after swapping the values is-----> ";
    swap(a,b);
    a.show();
    b.show();

    

    return 0;

}
   