#include <stdio.h>
void monthseven(int num){
       printf("1.January = 31 days\n");
       printf("2.February = 29 days\n");
       printf("3.March = 31 days\n");
       printf("4.April = 30 days\n");
       printf("5.May = 31 days\n");
       printf("6.June = 30 days\n");
       printf("7.July = 31 days\n");
       printf("8.August = 31 days\n");
       printf("9.September = 30 days\n");
       printf("10.October = 31 days\n");
       printf("11.November = 30 days\n");
       printf("12.December = 31 days\n");
       printf("%d's year has 366 days\n",num);
}
void monthsodd(int num){
       printf("1.January = 31 days\n");
       printf("2.February = 28 days\n");
       printf("3.March = 31 days\n");
       printf("4.April = 30 days\n");
       printf("5.May = 31 days\n");
       printf("6.June = 30 days\n");
       printf("7.July = 31 days\n");
       printf("8.August = 31 days\n");
       printf("9.September = 30 days\n");
       printf("10.October = 31 days\n");
       printf("11.November = 30 days\n");
       printf("12.December = 31 days\n");
       printf("%d's year has 365 days.\n",num);
}
void invalid(){
       printf("Invalid Process!\n");
}
int main() {
    int num;
    printf("Please enter a number of year : ");
    scanf("%d",&num);
  if(num>=0){
   if(num%4==0){
       monthseven(num);
   }else{
       monthsodd(num);
   }
    }else{
       invalid(); 
    }
    return 0;
}