#include <stdio.h>

int main() {
    int num,remain;
    printf("Please enter a number : ");
    scanf("%d",&num);
    if(num==0){
        printf("Num : %d",num);
    }else if(num>0){
        printf("Reverse : ");
        while(num!=0){
            remain=num % 10;
            printf("%d",remain);
            num/=10;
        }
    }else if(num<0){
        num=0-num;
        printf("Reverse : ");
        printf("-");
        while(num!=0){
            remain=num % 10;
            printf("%d",remain);
            num/=10;
        }
    }else{
        printf("Invalid Process!\n");
    }
    return 0;
}