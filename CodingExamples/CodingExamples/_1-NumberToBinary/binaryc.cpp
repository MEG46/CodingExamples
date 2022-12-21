#include <iostream>
using namespace std;
int main(){
	int arr[32],num,i=0,j;
	cout << "Please enter a number : ";
	cin >> num;
	if(num<0){
		cout << "Please enter a positive number!\n";
		return 0;
	}
	while(num>0){
		if(num%2==0){
			arr[i]=0;
		}else{
			arr[i]=1;
		}
	i++;
	num/=2;
	}
	cout << "0";
	for(j=i-1;0<=j;j--){
		cout << arr[j];
	}
	return 0;
}