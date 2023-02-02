#include<iostream>
using namespace std;

// class AOC
// {
//     public:
//     float r;

//     AOC ()
//     {

//     }

//     AOC(float a)
//     {
//         a=r;
//     }

//    float Area();
// };

// float AOC :: Area()
// {
//     return(3.14*r*r);
// }

int main()
{
    float r;
    cout<<"enter a radios"<<endl;
    cin>>r;
    float z=3.14*r*r;
  //  AOC a=AOC(r);
  // float z=a.Area();
    cout<<"Area of circle is -----> "<<z<<endl;
    return 0;
}