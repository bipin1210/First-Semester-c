#include<stdio.h>
void main(){
int age[4];
for(int i=0;i<4;i++){
printf("enter the value in index");
scanf("%d",&age[i]);
}
printf("element of arrays are");
int sum=0;
for(int i=0;i<4;i++){
    printf(" \n %d",age[i]);
    sum=sum+age[i];
}
printf("the sum of element of arrays is %d",sum);
}