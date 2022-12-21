#include <stdio.h>

int main() {
    while(1){
    int day,month,year,days;
    printf("Please enter a date : (day:mont:year) : ");
    scanf("%d:%d:%d",&day,&month,&year);
    if((day>0&&day<=31)&&(month>0&&month<=12)&&year>0){
        printf("From 01:01:%d To %d:%d:%d:\n",year,day,month,year);
        days=day+30*(month-1)-1;
        if(year%4==0&&month>=3){
            days++;
        }
        printf("Days : %d\n",days);
    }else{
        printf("Please enter a valid date!\n");
    }
}
    return 0;
}