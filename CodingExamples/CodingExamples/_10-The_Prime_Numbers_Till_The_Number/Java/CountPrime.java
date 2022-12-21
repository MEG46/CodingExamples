import java.util.Scanner;
class CountPrime {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int num,flag,i,j,d=2,count=0;
    System.out.print("Please enter a number : ");
    num=input.nextInt();
    System.out.println();
    if(num<2){
        System.out.print("Please enter a bigger number!\n");
    }else{
    System.out.print("Prime Numbers:\n");
    System.out.println();
    while(d<=num){
    flag=1;
    i=d/2;
    for(j=2;j<=i;j++){
        if(d%j==0){
            flag=0;
        }
    }
    if(flag==1){
        System.out.print(d + "\t");
        count++;
    }
    d++;
    }
    System.out.println();
   System.out.print("\nNumber of prime numbers : " + count);
    }
}
}