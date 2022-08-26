#include<stdio.h>
void main()
{
    int a,b;
    printf("value of a:");
    scanf("%d",&a);
    printf("enter value b:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a:%d\nb=%d",a,b);
}