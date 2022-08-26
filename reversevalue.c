#include<stdio.h>
void main()
{
    int x=65789,rem;

    while(x!=0)
    {
     rem=x%10;
     x=x/10;

     printf("%d",rem);   
    }
}