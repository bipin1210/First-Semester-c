#include<stdio.h>
void main() {
    int option;
    char choice;
    printf("\n");
    do{
        printf("\n welcome to dwit khaja ghar");
printf("*************");
printf("\n1.momo\n2.chowmein\n3.paneer\n4.cold drink\n");
printf("enter your order:");
scanf("%d",&option);
printf("%d",option);
printf("\n");
if(option==1) {
    printf("your momo is ready");
}
else if(option==2) {
    printf("your chowmein is ready");
}
else if(option==3) {
    printf("your paneer is ready");
}
else if(option==4) {
    printf("your cold drink is ready");
}
else{
    printf("your order no is invalid ");
}
    printf("do you want to continue(yes-y)");
    scanf(" %c",&choice);
    }while(choice=='y');
printf("pay your bill");
}









