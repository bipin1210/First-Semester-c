//fibonacci series
#include<stdio.h>
void main(){
    int a=0,b=1,nt=a+b,c;
    printf("enter the number");
    scanf("%d",&c);
    printf("the fibonacci series is %d%d",a,b);
    for(int i=2;i<=c;i++){
        printf("%d",nt);
        a=b;
        b=nt;
        nt=a+b;
    } 
}