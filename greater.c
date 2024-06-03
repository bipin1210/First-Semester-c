#include<stdio.h>
void evenodd();
void main(){
    evenodd();
}
void evenodd(){
int a,b;
printf("enter the number");
scanf("%d",&a);
if(a%2==0){
    printf("the number is even");
}
else{
    printf("the number is odd");
}
}