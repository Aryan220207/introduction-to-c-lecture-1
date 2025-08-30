#include<stdio.h>
void main()
{
    int i,j,k,avg,t;
    printf("Enter marks of first subject : ");
    scanf("%d",&i);
    printf("Enter marks of second subject : ");
    scanf("%d",&j);
    printf("Enter marks of third subject : ");
    scanf("%d",&k);
    t=i+j+k;
    printf("total is : %d\n",t);
    avg=(i+j+k)/3;
    printf("Average is : %d",avg);
}
