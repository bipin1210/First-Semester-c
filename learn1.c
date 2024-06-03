#include<stdio.h>
void main() {
    int i;
    int a;
    printf("enter the integer");
    scanf("%d",&a);
    int multi=1;
for(i=1;i<=10;i++){
    multi=a*i;
printf("%d times %d is %d\n",a,i,multi);
}
}