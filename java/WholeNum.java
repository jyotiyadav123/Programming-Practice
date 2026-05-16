import java.util.*;

class WholeNum {
    public static void main(String [] args){
 
        Scanner sc=new Scanner(System.in);
        int a= sc.nextInt();
        double b = sc.nextDouble();
        float f = sc.nextFloat();

        if(a>0){
            System.out.println("Number is positive ");

        }
        else if(a<0){
            System.out.println("number is negative");
        }
        else{
            System.out.println("Number is zero ");
        }

    }
}
