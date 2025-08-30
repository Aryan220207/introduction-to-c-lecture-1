#include<stdio.h>
void main()
{
    float c,F;
    printf("Enter temperature in fahrenheit : ");
    scanf("%f",&F);
    c=F-32*5/9;
    printf("Temperature in celsius is : %f",c);

}
