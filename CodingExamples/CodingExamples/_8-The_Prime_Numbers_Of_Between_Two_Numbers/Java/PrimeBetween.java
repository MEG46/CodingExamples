import java.util.Scanner;
class PrimeBetween {
    public static void main(String[] args){
    Scanner input=new Scanner(System.in);
    int num1,num2,i,c,j,count=0,flag;
    double result=0.0;
   System.out.print("Please enter a number : ");
   num1=input.nextInt();
   System.out.println();
   System.out.print("Please enter a number : ");
   num2=input.nextInt();
   System.out.println();
    if(num1>0&&num2>0){
       if(num1>num2){
        System.out.println("Prime Numbers Between (" + num2 + "," + num1 + "):\n");
           c=num2;
        while(num1>=c&&num2<=c){
            flag=1;
            i=c/2;
            if(i==0){
                flag=0;
            }
            for(j=2;j<=i;j++){
                
                if(c%j==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
               result+=c;
               System.out.print( c + "\t");
               count++;
            }
            c++;
       }
       result=result/count;
       System.out.println("\nAverage of prime numbers between (" + num2 + "," + num1 + ") = " + result);   
       }else if(num2>num1){
        System.out.println("Prime Numbers Between (" + num1 + "," + num2 + "):\n");
         c=num1;
        while(num2>=c&&num1<=c){
            flag=1;
            i=c/2;
            if(i==0){
                flag=0;
            }
            for(j=2;j<=i;j++){
                
                if(c%j==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
               result+=c;
               System.out.print( c + "\t");
               count++;
            }
            c++;
            
       }
       result=result/count;
       System.out.println("\nAverage of prime numbers between (" + num1 + "," + num2 + ") = " + result);   
       }else{
       System.out.println("\nThe numbers are same!Please enter different numbers!\n");   
       }  
    }else{
       System.out.println("Please enter positive numbers!\n");
    }
    }
}