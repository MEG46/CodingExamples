#include <stdio.h>

int main() {
    int i;
    printf("Divisible by 3:\n");
    for(i=1;i<100;i++){
        if(i%3==0){
            printf("%d\t",i);
        }
    }
    printf("\nDivisible by 5:\n");
    for(i=1;i<100;i++){
        if(i%5==0){
            printf("%d\t",i);
        }
    }
     printf("\nDivisible by both:\n");
    for(i=1;i<100;i++){
        if(i%15==0){
            printf("%d\t",i);
        }
    }
    return 0;
}