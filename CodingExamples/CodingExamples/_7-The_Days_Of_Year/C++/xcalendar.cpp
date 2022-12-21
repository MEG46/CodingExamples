#include <iostream>
using namespace std;
void monthseven(int num){
       cout << "1.January = 31 days\n";
       cout << "2.February = 29 days\n";
       cout << "3.March = 31 days\n";
       cout << "4.April = 30 days\n";
       cout << "5.May = 31 days\n";
       cout << "6.June = 30 days\n";
       cout << "7.July = 31 days\n";
       cout << "8.August = 31 days\n";
       cout << "9.September = 30 days\n";
       cout << "10.October = 31 days\n";
       cout << "11.November = 30 days\n";
       cout << "12.December = 31 days\n";
       cout << num << "'s year has 366 days\n";
}
void monthsodd(int num){
       cout << "1.January = 31 days\n";
       cout << "2.February = 28 days\n";
       cout << "3.March = 31 days\n";
       cout << "4.April = 30 days\n";
       cout << "5.May = 31 days\n";
       cout << "6.June = 30 days\n";
       cout << "7.July = 31 days\n";
       cout << "8.August = 31 days\n";
       cout << "9.September = 30 days\n";
       cout << "10.October = 31 days\n";
       cout << "11.November = 30 days\n";
       cout << "12.December = 31 days\n";
       cout << num << "'s year has 365 days\n";
}
void invalid(){
       cout << "Invalid Process!\n";
}
int main() {
    int num;
    cout << "Please enter a number of year : ";
    cin >> num;
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