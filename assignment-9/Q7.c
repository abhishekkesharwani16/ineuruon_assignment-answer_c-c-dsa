// Program to take the value from the user as input electricity unit charges and calculate
// total electricity bill according to the given condition . Using the switch statement.

// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include <stdio.h>
int main()
{
    int unit;
    float total, final_total;
    printf("Enter value of n in use of elctricity unit--->\n");
    scanf("%d", &unit);

    switch (unit > 50)
    {
    case 0: // for first 50 units
        total = unit * 0.50;
        break;

    case 1: // for greater than 50
        switch (unit > 150)
        {
        case 0: // for 51 to 150
            total = 25 + (unit - 50) * .75;
            break;

        case 1: // for greater than 150
            switch (unit > 250)
            {
            case 0: // for 151 to 250
                total = 25 + (100 * .75) + (unit - 150) * 1.20;
                break;

            case 1: // for greater than 250
                total = 25 + 75 + 120 + (unit - 250) * 1.50;
                break;
            }
            break;
        }

        break;
    }
    final_total=total+total*.2;
    printf("%f\n",final_total);
    return 0;
}