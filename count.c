#include<stdio.h>
void main(){
    int num,pos=0,neg=0,zer=0;
     char choice;
do{
        printf("enter a number");
        scanf("%d",&num);
        if(num>0){
            pos++;
        }
    else if(num<0){
        neg++;
    }
    else{
        zer++;
    }
printf("\n do you want to continue(y/n)");
scanf(" %c",&choice);
    }
    while(choice=='y');
    printf("pos=%d neg=%d zero=%d",pos,neg,zer);
}