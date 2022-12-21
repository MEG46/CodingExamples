#include <stdio.h>

int main() {
    int num,flag,i,j,d=2,count=0;
    printf("Please enter a number : ");
    scanf("%d",&num);
    if(num<2){
        printf("Please enter a bigger number!\n");
    }else{
    printf("Prime Numbers:\n");
    while(d<=num){
    flag=1;
    i=d/2;
    for(j=2;j<=i;j++){
        if(d%j==0){
            flag=0;
            
        }
    }
    if(flag==1){
        printf("%d\t",d);
        count++;
    }
    d++;
    }
    printf("\nNumber of prime numbers : %d",count);
    }
}
    