#include<stdio.h>
//function declaration
void addnumber();
void main () {
    //function call
    addnumber();
}
//function definition
void addnumber() {
    int num1,num2,sum;
    printf("the num1 and num2 is:");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("the sum of %d and %d is %d",num1,num2,sum);
}