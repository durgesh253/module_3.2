#include<stdio.h>
void main()
{
    int i,num;
    printf("enter the num:");
    scanf("%d",&num);

    printf("\n table of %d number:",num);

    for(i=1;i<=10;i++)
    {
        printf("\n%d*%d=%d",num,i,(num*i));
        
    } 
}