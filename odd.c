#include<stdio.h>
void main() {
int num,rem;
printf("enter the number:");
scanf("%d",&num);
rem=num%2;
if(rem!=0){
printf("%d is the odd num\n", num);
}
else{
    printf("%d is the even num",num);
}
printf("program finished");
}