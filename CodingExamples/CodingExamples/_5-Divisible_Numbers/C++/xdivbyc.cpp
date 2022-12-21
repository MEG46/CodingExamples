#include <iostream>
using namespace std;
int main() {
    int i;
    cout << "Divisible by 3:\n";
    for(i=1;i<100;i++){
        if(i%3==0){
           cout << i << "\t";
        }
    }
   cout << "\nDivisible by 5:\n";
    for(i=1;i<100;i++){
        if(i%5==0){
             cout << i << "\t";
        }
    }
    cout << "\nDivisible by both:\n";
    for(i=1;i<100;i++){
        if(i%15==0){
             cout << i << "\t";
        }
    }

    return 0;
}