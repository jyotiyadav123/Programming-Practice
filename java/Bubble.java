class Bubble
{
    public static void main(String[] args)
    {
        int a[]={5,1,9,3,7,9};
        for(int i=0;i<a.length;i++)
            for(int j=0;j<a.length-1;j++)
        if(a[j]>a[j+1])
        {
            int t=a[j];
            a[j]=a[j+1]; a[j+1]=t;
        }
        for(int i:a)
            System.out.print(i+" ");
    }
}
