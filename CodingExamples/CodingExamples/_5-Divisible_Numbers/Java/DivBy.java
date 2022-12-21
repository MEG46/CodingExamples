class DivBy {
    public static void main(String[] args) {
        int i;
    System.out.print("Divisible by 3:\n");
    for(i=1;i<100;i++){
        if(i%3==0){
            System.out.print(i+"\t");
        }
    }
    System.out.print("\nDivisible by 5:\n");
    for(i=1;i<100;i++){
        if(i%5==0){
            System.out.print(i+"\t");
        }
    }
    System.out.print("\nDivisible by both:\n");
    for(i=1;i<100;i++){
        if(i%15==0){
            System.out.print(i+"\t");
        }
    }
    }
}