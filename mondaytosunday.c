#include<stdio.h>
void main()
{
    int day;
    printf("enter day:");
    scanf("%d",&day);

    switch(day){
        case 1:
        printf("monday");
        break;

        case 2:
        printf("tuseday");
        break;

        case 3:
        printf("wensday");
        break;

        default:
        printf("invalid input");
        break;

        case 4:
        printf("thursday");
        break;

        case 5:
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;

        case 7:
        printf("sunday");
        break;



    }
}
