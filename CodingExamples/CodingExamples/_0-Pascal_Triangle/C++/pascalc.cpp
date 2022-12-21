#include <iostream>
using namespace std;
int main(){
	int num,blk,c=1,i,j;
	cout << "Please enter how many rows do you want to print? : ";
	cin >> num;
	for(i=0;i<num;i++){
		for(blk=1;blk<=num-i;blk++)
		cout << "  ";
		for(j=0;j<=i;j++){
			if(j==0||i==0)
			   c=1;
			else
			   c=c*(i-j+1)/j;
			   cout << "   " << c;
		}
		cout << "\n";
		}
	return 0;
}