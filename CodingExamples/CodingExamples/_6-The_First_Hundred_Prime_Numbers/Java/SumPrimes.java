class SumPrimes {
    public static void main(String[] args) {
        int i,j,c=5,count=0,result=5,flag;
    System.out.print("First 100 prime numbers:\n");
    System.out.print("2\t3\t");
   do{
    flag=1;
    i=c/2;
    for(j=2;j<=i;j++){
    if(c%j==0){
        flag=0;
        break;
    }
    }
    if(flag==1){
       System.out.print(c + "\t");
        result+=c;
        count++;
    }
    c++;
    }while(count!=98);
   System.out.print("\n\nSum of first 100 prime numbers= " + result);
    }
}