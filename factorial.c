#include<stdio.h>
void main()
{
    int i,n;
    int fact=1;

    printf("enter the number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial no :%d",fact);
}
