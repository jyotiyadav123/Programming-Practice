#include<stdio.h>
void main(){
    int P,R,T;
    float S;
    printf("enter principal,rate,time\n");
    scanf("%d %d %d",&P,&R,&T);
    S=(P*R*T)/100.0;
    printf("simple interest=%f\n",S);
}
