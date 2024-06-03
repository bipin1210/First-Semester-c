#include<stdio.h>
void main(){
   int fact=1;
   int n;
   printf("enter the number");
   scanf("%d",n);
   for(int i=2;i<=n;i++){
    fact=fact*i;
   }
printf("the factorial is %d",fact);
}
