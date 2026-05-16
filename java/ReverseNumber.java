class ReverseNumber{
    public static void main(String[] args){
        int reverse=0;
        int n = 5678;

        while(n>0){
            int digit=n%10;
            reverse=reverse*10+digit;
            n=n/10;
            
        }

        System.out.println(n);
    }

}
