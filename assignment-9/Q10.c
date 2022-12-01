// 10. C program to find all roots of a quadratic equation using switch case

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D;


    printf("Enter value of a, b and c(aX^2+bX+c=0)----\n");
    scanf("%f %f %f",&a,&b,&c);
   
    /* calculate discreminant*/
    D=(b*b)-(4*a*c);

      /* Compute roots of quadratic equation based on the nature of discriminant */
    switch(D>0)
    {
         /* If discriminant is positive */
        case 1:
        printf("Two real and distict roots are given by %f, %f\n",(-b+sqrt(D))/(2*a), (-b-sqrt(D))/(2*a));
        break;

        case 0:
        switch(D==0)
        {
             /* If discriminant is zero */
            case 1:
            printf("exatly one real root are given by %f, %f\n",-(b/(2*a)),-(b/(2*a)));
            break;
               
                /* If discriminant is negative */
            case 0:
            printf("two distinct complex roots given by %f + i%f, %f - i%f",(-b/(2*a)),sqrt(-D)/(2*a),(-b/(2*a)),sqrt(-D)/(2*a));
            break;
        }
        break;
    }
    return 0;
}