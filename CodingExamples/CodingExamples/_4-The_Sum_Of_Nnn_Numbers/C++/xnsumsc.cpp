#include <iostream>
using namespace std;
int main() {
    int num,i,d=0,c,k;
    int count=0;
    cout << "Please enter a number : ";
    cin >> num;
    if(num>0){
    c=num;
    k=c;
    d+=(3*num);
    for(i=10;0<num;){
        num/=10;
        count++;
    }
    for(i=0;i<count;i++){
        c*=10;
    }
    d+=(2*c);
    for(i=0;i<2*count;i++){
        k*=10;
    }
    d+=k;
    cout << "Result = "<< d;
    }else if(num<0){
    num=0-num;
    c=num;
    k=c;
    d+=(3*num);
    for(i=10;0<num;){
        num/=10;
        count++;
    }
    for(i=0;i<count;i++){
        c*=10;
    }
    d+=(2*c);
    for(i=0;i<2*count;i++){
        k*=10;
    }
    d+=k;
    cout << "Result = "<< "-" << d; 
    }else if(num==0){
        cout << "Result = " << num;
    }else{
        cout << "Invalid Process!\n";
    }

    return 0;
}