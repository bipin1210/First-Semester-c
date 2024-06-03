#include<stdio.h>
void main() {
float m1,m2,m3,m4,m5,aggegrate,percentage;
printf("enter the marks of 5 student");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5); 
aggegrate=(m1+m2+m3+m4+m5);
percentage=(m1+m2+m3+m4+m5)/5;
printf("the aggregate marks of 5 students is %f",aggegrate);
printf("the percentage marks of 5 students is %f",percentage);
}