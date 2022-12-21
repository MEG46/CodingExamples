import java.util.Scanner;
class NnnSums {
    public static void main(String[] args) {
    Scanner input=new Scanner(System.in);
    int num,i,d=0,c,k;
    int count=0;
    System.out.print("Please enter a number : ");
    num=input.nextInt();
    if(num>0){
    c=num;
    k=c;
    d+=(3*num);
    for(i=10;0<num;){
        num/=10;
        count++;
    }
    for(i=0;i<count;i++){
        c*=10;
    }
    d+=(2*c);
    for(i=0;i<2*count;i++){
        k*=10;
    }
    d+=k;
    System.out.println("Result = "+ d);
    }else if(num<0){
    num=0-num;
    c=num;
    k=c;
    d+=(3*num);
    for(i=10;0<num;){
        num/=10;
        count++;
    }
    for(i=0;i<count;i++){
        c*=10;
    }
    d+=(2*c);
    for(i=0;i<2*count;i++){
        k*=10;
    }
    d+=k;
    System.out.println("Result = " + "-" + d); 
    }else if(num==0){
        System.out.println("Result = " + num);
    }else{
        System.out.println("Invalid Process!\n");
    }
        
    }
}