#include<stdio.h>
void main(){
    int no,count_even=0,sum_even=0,count_odd=0,sum_odd=0;
    for(int i=1;i<=10;i++){
        printf("\nenter no:");
        scanf("%d",&no);
        if(no%2==0){
    printf("\neven no");
    count_even++;
    sum_even=sum_even+no;
    }
    else{
        printf("\nodd no");
    count_odd++;
    sum_odd=sum_odd+no;
    }
}
printf("\ncount of even no:%d",count_even);
printf("\ncount of odd no:%d",count_odd);
printf("\nsum of even no:%d",sum_even);
printf("\nsum of even no:%d",sum_odd);

}
