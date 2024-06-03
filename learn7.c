#include<stdio.h>
int mult(int num1,int num2);
void main(){
int calc=mult(8,9);
printf("the multplie value is %d",calc);
}
int mult(int num1 , int num2){
int mult=num1*num2;
return mult;
}