#include<stdio.h>
void main(){
    int marks[5];
   for(int i=1;i<=5;i++){
    printf("enter the marks");
    scanf("\n %d",&marks[i]);
   }
float sum=0;
for(int i=1;i<=5;i++){
    sum=sum+marks[i];
}
float percentage=sum/2;
printf("the percentage is %f",percentage);
}