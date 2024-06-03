#include<stdio.h>
void main() {
int num;
printf("enter the number");
scanf("%d",&num);
if(num==1){
    printf("%d is sunday",num);
}
else if(num==2){
    printf("%d is monday",num);
}
else if(num==3){
    printf("%d is tuesday",num);
}
else if(num==4){
    printf("%d is wednesday",num);
}
else if(num==5){
    printf("%d is thursday",num);
}
else if(num==6){
    printf("%d is friday",num);
}
else if(num==7){
    printf("%d is saturday",num);
}
else {
    printf("the num is invalid",num);
}
}




