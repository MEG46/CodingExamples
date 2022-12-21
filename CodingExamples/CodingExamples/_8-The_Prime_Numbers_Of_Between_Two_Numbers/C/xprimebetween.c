#include <stdio.h>

int main() {
    int num1,num2,i,c,j,count=0,flag;
    double result=0.0;
    printf("Please enter a number : ");
    scanf("%d",&num1);
    printf("Please enter a number : ");
    scanf("%d",&num2);
    if(num1>0&&num2>0){
       if(num1>num2){
        printf("Prime Numbers Between (%d,%d):\n",num2,num1);
           c=num2;
        while(num1>=c&&num2<=c){
            flag=1;
            i=c/2;
            if(i==0){
                flag=0;
            }
            for(j=2;j<=i;j++){
                
                if(c%j==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
               result+=c;
               printf("%d\t",c);
               count++;
            }
            c++;
       }
       result=result/count;
       printf("\nAverage of prime numbers between (%d,%d) = %.2lf",num2,num1,result);
       }else if(num2>num1){
        printf("Prime Numbers Between (%d,%d):\n",num1,num2);
         c=num1;
        while(num2>=c&&num1<=c){
            flag=1;
            i=c/2;
            if(i==0){
                flag=0;
            }
            for(j=2;j<=i;j++){
                
                if(c%j==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
               result+=c;
               printf("%d\t",c);
               count++;
            }
            c++;
            
       }
       result=result/count;
       printf("\nAverage of prime numbers between (%d,%d) = %.2lf",num1,num2,result);   
       }else{
        printf("\nThe numbers are same!Please enter different numbers!\n");   
       }  
    }else{
       printf("Please enter positive numbers!\n");
    }
    
    return 0;
}