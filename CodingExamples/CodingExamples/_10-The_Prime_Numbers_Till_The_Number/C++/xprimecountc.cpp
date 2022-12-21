#include <iostream>
using namespace std;
int main() {
    int num,flag,i,j,d=2,count=0;
    cout << "Please enter a number : ";
    cin >> num;
    if(num<2){
        cout << "Please enter a bigger number!\n";
    }else{
    cout << "Prime Numbers:\n";
    while(d<=num){
    flag=1;
    i=d/2;
    for(j=2;j<=i;j++){
        if(d%j==0){
            flag=0;
        }
    }
    if(flag==1){
        cout << d << "\t";
        count++;
    }
    d++;
    }
   cout << "\nNumber of prime numbers : " << count;
    }
}