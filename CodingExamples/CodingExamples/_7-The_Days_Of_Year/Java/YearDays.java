import java.util.Scanner;
class YearDays {
public static void monthseven(int num){
       System.out.println("1.January = 31 days\n");
       System.out.println("2.February = 29 days\n");
       System.out.println("3.March = 31 days\n");
       System.out.println("4.April = 30 days\n");
       System.out.println("5.May = 31 days\n");
       System.out.println("6.June = 30 days\n");
       System.out.println("7.July = 31 days\n");
       System.out.println("8.August = 31 days\n");
       System.out.println("9.September = 30 days\n");
       System.out.println("10.October = 31 days\n");
       System.out.println("11.November = 30 days\n");
       System.out.println("12.December = 31 days\n");
       System.out.println(num + "'s year has 366 days\n");
}
public static void monthsodd(int num){
       System.out.println("1.January = 31 days\n");
       System.out.println("2.February = 28 days\n");
       System.out.println("3.March = 31 days\n");
       System.out.println("4.April = 30 days\n");
       System.out.println("5.May = 31 days\n");
       System.out.println("6.June = 30 days\n");
       System.out.println("7.July = 31 days\n");
       System.out.println("8.August = 31 days\n");
       System.out.println("9.September = 30 days\n");
       System.out.println("10.October = 31 days\n");
       System.out.println("11.November = 30 days\n");
       System.out.println("12.December = 31 days\n");
       System.out.println(num + "'s year has 365 days\n");
}
public static void invalid(){
       System.out.println("Invalid Process!\n");
}
public static void main(String[] args) {
    Scanner input=new Scanner(System.in);
    int num;
    System.out.print("Please enter a number of year : ");
    num=input.nextInt();
    System.out.println();
  if(num>=0){
   if(num%4==0){
       monthseven(num);
   }else{
       monthsodd(num);
   }
    }else{
       invalid(); 
    }
    }
}