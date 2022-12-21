import java.util.Scanner;
class Binary {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
	int arr[]=new int[32];
	int num,i=0,j;
	System.out.print("Please enter a number : ");
	num=input.nextInt();
	System.out.println();
	if(num<0){
		System.out.println("Please enter a positive number!\n");
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
	if(num>=0){
	System.out.print("0");
	for(j=i-1;0<=j;j--){
		System.out.print(arr[j]);
	}
	}
}
}