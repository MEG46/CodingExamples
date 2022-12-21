#include <iostream>
using namespace std;
int main() {
    int num,result=0,i=10;
    do{
    result=0;
    cout << "Please enter a number : ";
    cin >> num;
    if(num>0){
    while(num>0){
        result+=num%i;
        num/=10;
    }
    cout << "Result = "<< result << endl;
    }else{
        cout << "Invalid Process!Please enter a positive number!\n";
    }
    }while(result>10);
    return 0;
}