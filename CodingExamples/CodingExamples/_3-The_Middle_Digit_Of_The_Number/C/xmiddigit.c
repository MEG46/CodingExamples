#include <stdio.h>

int main() {
    int num,i,d;
    int count=0;
    printf("Please enter a number : ");
    scanf("%d",&num);
    if(num>0){
    d=num;
    for(i=10;0<num;){
        num/=10;
        count++;
    }
    if(count%2==0){
        printf("The number have even digits.Couldn't find the mid digit!\n");
    }else{
        for(i=0;i<count/2;i++){
            d/=10;
        }
        printf("Mid Digit = %d\n",(d%10));
    }
    }else if(num<0){
    num=0-num;
    d=num;
    for(i=10;0<num;){
        num/=10;
        count++;
    }
    if(count%2==0){
        printf("The number have even digits.Couldn't find the mid digit!\n");
    }else{
        for(i=0;i<count/2;i++){
            d/=10;
        }
        printf("Mid Digit = %d\n",(d%10));
    }  
    }else if(num==0){
        printf("Mid Digit = %d\n",num);
    }else{
        printf("Invalid Process!\n");
    }
    return 0;
}