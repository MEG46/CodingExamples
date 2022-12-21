#include <iostream>
using namespace std;
int main() {
    int num1,num2,i,c,j,count=0,flag;
    double result=0.0;
    cout << "Please enter a number : ";
    cin >> num1;
   cout << "Please enter a number : ";
    cin >> num2;
    if(num1>0&&num2>0){
       if(num1>num2){
        cout << "Prime Numbers Between (" << num2 << "," << num1 << "):" << endl;
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
               cout << c << "\t";
               count++;
            }
            c++;
       }
       result=result/count;
       cout << "\nAverage of prime numbers between (" << num2 << "," << num1 << ") = " << result;   
       }else if(num2>num1){
        cout << "Prime Numbers Between (" << num1 << "," << num2 << "):" << endl;
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
               cout << c << "\t";
               count++;
            }
            c++;
            
       }
       result=result/count;
       cout << "\nAverage of prime numbers between (" << num1 << "," << num2 << ") = " << result;   
       }else{
       cout << "\nThe numbers are same!Please enter different numbers!\n";   
       }  
    }else{
       cout << "Please enter positive numbers!\n";
    }
    
    return 0;
}