#include <iostream>
using namespace std;
int main() {
    while(1){
    int day,month,year,days;
   cout << "Please enter a date : (day mont year) : ";
   cin >> day >> month >> year;
    if((day>0&&day<=31)&&(month>0&&month<=12)&&year>0){
        cout << "From 01:01:"<< year << " To " << day << ":" << month<< ":" << year << "\n";
        days=day+30*(month-1)-1;
        if(year%4==0&&month>=3){
            days++;
        }
        cout << "Days : " << days << endl;
    }else{
        cout << "Please enter a valid date!\n";
    }
}
    return 0;
}