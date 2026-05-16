import java.util.Scanner;
class remainder{
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the numbers");
        int a= sc.nextInt();
        int b=sc.nextInt();
        int remainder=a%b;
        System.out.println("The remainder is "+remainder);
    }
}