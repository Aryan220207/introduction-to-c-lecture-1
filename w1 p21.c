#include<stdio.h>
void main()
{
    float gs,d,a,s;
    printf("Enter gross salary : ");
    scanf("%f",&gs);
    a=10*gs/100.0;
    printf("allowance is : %f\n",a);
    d=3*gs/100.0;
    printf("deduction is : %f\n",d);
    s=gs+a-d*1.0;
    printf("Your salary is : %f\n",s);
}
