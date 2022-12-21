#include <stdio.h>
int main(){
	int arr[32],num,i=0,j;
	printf("Please enter a number : ");
	scanf("%d",&num);
	if(num<0){
		printf("Please enter a positive number!\n");
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
	printf("0");
	for(j=i-1;0<=j;j--){
		printf("%d",arr[j]);
	}
	return 0;
}