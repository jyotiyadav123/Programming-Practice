#include<stdio.h>
int main()
{
    int n;
    printf("Enter no.\n");
    scanf("%d",&n); 
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            printf("Smallest Dividion is %d", i);
            break;
        }
    }
    return 0;
}
        
    