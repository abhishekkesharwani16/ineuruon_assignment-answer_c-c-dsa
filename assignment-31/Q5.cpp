#include <iostream>
using namespace std;

class item
{
public:
    int item_no;
    char name[30];
    int item_price;
};

class Discounted_Item : public item
{
public:
    float discount_percent;
    int discounted_price;
    void accept_details()
    {
        cout << "\n Enter Item Name        : ";
        cin >> name;
        cout << "\n Enter Item No          : ";
        cin >> item_no;
        cout << "\n Enter Item price       : ";
        cin >> item_price;
        cout << "\n Enter Discount percent : ";
        cin >> discount_percent;
        cout << "\n ------------------------------\n";
        discounted_price = item_price - item_price * discount_percent / 100;
    }

    void display()
    {
        cout << "\n item Name : " << name;
        cout << "\n item No : " << item_no;
        cout << "\n item Price : " << item_price;
        cout << "\n Discount Percent : " << discount_percent;
        cout << "\n Discount price : " << discounted_price;
        cout << "\n ----------------------------------";
    }
};

int main()
{
    int i, cnt, discount = 0, price = 0;
    Discounted_Item d[100];

    cout << "\n How many items you want to enter? : ";
    cin >> cnt;

    for (i = 1; i <= cnt; i++)
    {
        d[i].accept_details();
    }

    for (i = 1; i <= cnt; i++)
    {
        d[i].display();
    }
    for (i = 1; i <= cnt; i++)
    {
        price = price + d[i].item_price;
    }
    for (i = 1; i <= cnt; i++)
    {
        discount = discount + d[i].item_price - d[i].discounted_price;

        cout << "\n Total price : " << price;
        cout << "\n Total Discountt : " << discount;
        // cout<<"\n Total payable Amount : "<<price-discount;
        return 0;
    }
}