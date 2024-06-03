//wap that keep asking until user input a odd no
#include<stdio.h>
void main() {
    int a;
printf("enter a number");
scanf("%d",&a);
while(a%2==0){
printf("enter a number");
scanf("%d",&a);
   if(a%2==1){
    break;
   }
}
printf("program ended");
}
//using do while it's too easyyyy
/*#include<stdio.h>
void main() {
    int a;
do{printf("enter a number");
scanf("%d",&a);}
while(a%2==0);
} */