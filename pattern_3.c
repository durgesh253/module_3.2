#include<stdio.h>
void main()
{
    int number;
    printf("enter the number of pattern:");
    scanf("%d",&number);
    for (int row = 1; row<=number; row++)
    {
        for (int col = 1; col <=row; col++)
        {
            printf("%c",'A'+col-1);

        }
        printf("\n");
        
    }
    
}