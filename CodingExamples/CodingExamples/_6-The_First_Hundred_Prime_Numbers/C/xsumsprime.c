#include <stdio.h>
int main() {
    int i,j,c=5,count=0,result=5,flag;
    printf("First 100 prime numbers:\n");
    printf("2\t3\t");
   do{
    flag=1;
    i=c/2;
    for(j=2;j<=i;j++){
    if(c%j==0){
        flag=0;
        break;
    }
    }
    if(flag==1){
        printf("%d\t",c);
        result+=c;
        count++;
    }
    c++;
    }while(count!=98);
   printf("\nSum of first 100 prime numbers= %d",result);
    return 0;
}