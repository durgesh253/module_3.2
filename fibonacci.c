#include<stdio.h>
void main()
{
    int x=0,y=1,fibo;
    printf("%d%d",x,y);

    for (int i = 1; i <=10; i++)
    {
        fibo=x+y;
        x=y;
        y=fibo;
        printf("\n %d",fibo);
    }
    
}