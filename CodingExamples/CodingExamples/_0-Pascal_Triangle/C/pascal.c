#include <stdio.h>
int main(){
	int num,blk,c=1,i,j;
	printf("Please enter how many rows do you want to print? : ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		for(blk=1;blk<=num-i;blk++)
		printf("  ");
		for(j=0;j<=i;j++){
			if(j==0||i==0)
			   c=1;
			else
			   c=c*(i-j+1)/j;
			   printf("%4d",c);
		}
		printf("\n");
		}
	return 0;
}