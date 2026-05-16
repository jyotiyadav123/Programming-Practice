import java.util.Scanner;
class Demo8{
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enetr the value of a");
        int a=sc.nextInt();
        if(a%2==0){
            System.out.println("the number is even "+a);
        }
        else{
            System.out.println("The number is odd "+a);
        }
      
    }
}
