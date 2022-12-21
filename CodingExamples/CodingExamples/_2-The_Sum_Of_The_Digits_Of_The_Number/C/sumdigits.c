#include <stdio.h>
int main() {
    int num,result=0,i=10;
    do{
    result=0;
    printf("Please enter a number : ");
    scanf("%d",&num);
    if(num>0){
    while(num>0){
        result+=num%i;
        num/=10;
    }
    printf("Result = %d\n",result);
    }else{
        printf("Invalid Process!Please enter a positive number!\n");
    }
    }while(result>10);
    return 0;
}