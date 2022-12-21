import java.util.Scanner;
class DayCounter {
    public static void main(String[] args) {
    Scanner input=new Scanner(System.in);
       while(true){
    int day,month,year,days;
   System.out.print("Please enter a date : (day mont year) : ");
   day=input.nextInt();
   System.out.print(" ");
   month=input.nextInt();
   System.out.print(" ");
   year=input.nextInt();
   System.out.println();
    if((day>0&&day<=31)&&(month>0&&month<=12)&&year>0){
        System.out.print("From 01:01:" + year + " To " + day + ":" + month + ":" + year + "\n");
        days=day+30*(month-1)-1;
        if(year%4==0&&month>=3){
            days++;
        }
        System.out.println("Days : " + days + "\n");
    }else{
        System.out.println("Please enter a valid date!\n");
    }
}
    }
}