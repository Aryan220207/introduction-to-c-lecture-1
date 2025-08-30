#include<stdio.h>
void main()
{
    float bytes,kb,mb,gb;
    printf("Enter numbers of bytes : ");
    scanf("%f",&bytes);
    kb=bytes/1000.0;
    mb=bytes/125000.0;
    gb=bytes/1000000000.0;
    printf("numbers of kb : %f\nnumbers of mb : %f\nnumbers of gb : %f\n ",kb,mb,gb);
}

