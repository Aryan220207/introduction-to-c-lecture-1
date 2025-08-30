#include<stdio.h>
void main()
{
    float a,l,b,p;
    printf("Enter length of side of rectangle : ");
    scanf("%f",&l);
    printf("Enter breadth of side of rectangle : ");
    scanf("%f",&b);
    a=l*b;
    p=2*(l+b);
    printf("area of rectangle :%f\nperimeter of rectangle : %f\n",a,p);
}
