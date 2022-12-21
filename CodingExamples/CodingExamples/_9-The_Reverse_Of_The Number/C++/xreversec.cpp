#include <iostream>
using namespace std;
int main() {
    int num,remain;
    cout << "Please enter a number : ";
    cin >> num;
    if(num==0){
        cout << "Num : " << num;
    }else if(num>0){
        cout << "Reverse : ";
        while(num!=0){
            remain=num % 10;
            cout << remain;
            num/=10;
        }
    }else if(num<0){
        num=0-num;
        cout << "Reverse : ";
        cout << "-";
        while(num!=0){
            remain=num % 10;
            cout << remain;
            num/=10;
        }
    }else{
        cout << "Invalid Process!\n";
    }
    return 0;
}