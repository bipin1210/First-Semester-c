#include<stdio.h>
void main(){
 int s=0,r,a;
 printf("enter the value");
 scanf("%d",&a);
 while(a!=0){
r=a%10;
s=s+r;
a=a/10;

 }
printf("the sum of is %d",s);
}
//practice to write codes in copy to not get it wrong during exams