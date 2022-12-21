import java.util.Scanner;
class MidDigit {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int num,i,d;
    int count=0;
    System.out.print("Please enter a number : ");
    num=input.nextInt();
    System.out.println();
    if(num>0){
    d=num;
    for(i=10;0<num;){
        num/=10;
        count++;
    }
    if(count%2==0){
        System.out.println("The number have even digits.Couldn't find the mid digit!\n");
    }else{
        for(i=0;i<count/2;i++){
            d/=10;
        }
       System.out.println("Mid Digit = "+(d%10));
    }
    }else if(num<0){
    num=0-num;
    d=num;
    for(i=10;0<num;){
        num/=10;
        count++;
    }
    if(count%2==0){
        System.out.println("The number have even digits.Couldn't find the mid digit!\n");
    }else{
        for(i=0;i<count/2;i++){
            d/=10;
        }
        System.out.println("Mid Digit = "+(d%10));
    }  
    }else if(num==0){
        System.out.println("Mid Digit = "+num);
    }else{
        System.out.println("Invalid Process!\n");
    }
    }
}