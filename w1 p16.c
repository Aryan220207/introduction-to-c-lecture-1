#include<stdio.h>
void main()
{
    float i,p,r,n;
    printf("Enter principle amount : ");
    scanf("%f",&p);
    printf("Enter rate of interest : ");
    scanf("%f",&r);
    printf("Enter numbers of years : ");
    scanf("%f",&n);
    i=p*r*n/100.0;
    printf("Simple interest is : %f",i);
}
