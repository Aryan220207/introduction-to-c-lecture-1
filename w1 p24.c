#include<stdio.h>
void main()
{
    int i,j,t;
    printf("Entre two numbers : ");
    scanf("%d\n%d",&i,&j);
    t=i;
    i=j;
    j=t;
    printf("After swaping i=%d j=%d",i,j);
}
