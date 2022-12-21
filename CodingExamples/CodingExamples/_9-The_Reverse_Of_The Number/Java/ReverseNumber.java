import java.util.Scanner;
class ReverseNumber {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num,remain;
    System.out.print("Please enter a number : ");
    num=input.nextInt();
    System.out.println();
    if(num==0){
        System.out.print("Num : " + num);
    }else if(num>0){
        System.out.print("Reverse : ");
        while(num!=0){
            remain=num % 10;
            System.out.print(remain);
            num/=10;
        }
    }else if(num<0){
        num=0-num;
        System.out.print("Reverse : ");
        System.out.print("-");
        while(num!=0){
            remain=num % 10;
            System.out.print(remain);
            num/=10;
        }
    }else{
        System.out.print("Invalid Process!\n");
    }
    }
}