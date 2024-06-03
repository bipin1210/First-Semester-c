#include<stdio.h>
void main() {
int a,b,c,sum;
printf("enter the angles:");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
if(sum==180) {
printf("the triangle is valid",sum);
}
else{
printf("triangle is not valid",sum);
}
}