#include<stdio.h>
void main()
{
    float ns,gs,d;
    printf("Enter gross sale : ");
    scanf("%f",&gs);
    printf("Enter discount : ");
    scanf("%f",&d);
    d=gs*d/100.0;
    ns=gs-(d/100);
    printf("Gross sale is : %f",ns);
}
