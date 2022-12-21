#include <iostream>
using namespace std;
int main() {
    int i,j,c=5,count=0,result=5,flag;
    cout << "First 100 prime numbers:\n";
    cout << "2\t3\t";
   do{
    flag=1;
    i=c/2;
    for(j=2;j<=i;j++){
    if(c%j==0){
        flag=0;
        break;
    }
    }
    if(flag==1){
        cout << c << "\t";
        result+=c;
        count++;
    }
    c++;
    }while(count!=98);
   cout << "\nSum of first 100 prime numbers= " << result;
    return 0;
}