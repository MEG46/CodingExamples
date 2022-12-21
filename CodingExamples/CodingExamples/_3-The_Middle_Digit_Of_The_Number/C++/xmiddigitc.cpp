#include <iostream>
using namespace std;
int main() {
    int num,i,d;
    int count=0;
    cout << "Please enter a number : ";
    cin >> num;
    if(num>0){
    d=num;
    for(i=10;0<num;){
        num/=10;
        count++;
    }
    if(count%2==0){
        cout << "The number have even digits.Couldn't find the mid digit!\n";
    }else{
        for(i=0;i<count/2;i++){
            d/=10;
        }
        cout << "Mid Digit = "<< (d%10)<< endl;
    }
    }else if(num<0){
    num=0-num;
    d=num;
    for(i=10;0<num;){
        num/=10;
        count++;
    }
    if(count%2==0){
        cout << "The number have even digits.Couldn't find the mid digit!\n";
    }else{
        for(i=0;i<count/2;i++){
            d/=10;
        }
        cout << "Mid Digit = "<< (d%10)<< endl;
    }  
    }else if(num==0){
        cout << "Mid Digit = "<< num << endl;
    }else{
       cout << "Invalid Process!\n";
    }
    return 0;
}