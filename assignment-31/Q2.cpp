#include <iostream>
using namespace std;

class Base
{
protected:
    int x, y;

public:
    void input()
    {
        cout << "Enter two numbers-->>" << endl;
        cin >> x >> y;
    }
    
};
class Derived : public Base
    {
        int sum;

    public:
        void add()
        {
            sum = x + y;
        }
        void display()
        {
            cout<<"sum of two numbers is = "<<sum<<endl;
        } 
    
    };

    int main()
    {
        Derived d;
        d.input();
        d.add();
        
        d.display();

        return 0;

    }