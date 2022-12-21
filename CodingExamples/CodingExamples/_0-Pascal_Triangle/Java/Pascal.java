import java.util.Scanner;
public class Pascal
{
	public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int num,blk,c=1,i,j;
        System.out.print("Please enter how many rows do you want to print : ");
        num=input.nextInt();
        System.out.println();
        for(i=0;i<num;i++){
            for(blk=1;blk<=num-i;blk++)
            System.out.print(" ");
            for(j=0;j<=i;j++){
                if(j==0||i==0)
                  c=1;
                else
                  c=c*(i-j+1)/j;
                  System.out.print(" "+c);
            }
            System.out.println();
        }
        
    }
}