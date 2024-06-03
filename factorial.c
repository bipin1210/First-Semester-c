#include<stdio.h>
void main() {
    int num,i;
    int fact=1;
    
    printf("enter the value");
    scanf("%d",&num);
   
    for(i=1;i<=num;i++){
       fact=fact*i ;
    }
   printf("the factorial of %d is%d",num,fact);
}