#include<stdio.h>
void main()
{
    int i,num,max;
    for(i=1;i<=5;i++)
    {
    printf("enter the five numbers:");
    scanf("%d",&num);

        if(num>max)
        {
            max=num;
        
    }
   
}
 printf("\n maximum value is:%d",max);
}