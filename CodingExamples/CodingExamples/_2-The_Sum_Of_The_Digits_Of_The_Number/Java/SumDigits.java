import java.util.Scanner;
class SumDigits {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int num,result=0,i=10;
    do{
    result=0;
    System.out.print("Please enter a number : ");
    num=input.nextInt();
    System.out.println();
    if(num>0){
    while(num>0){
        result+=num%i;
        num/=10;
    }
    System.out.println("Result = "+ result+"\n");
    }else{
        System.out.println("Invalid Process!Please enter a positive number!");
    }
    }while(result>10);
    }
}