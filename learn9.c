#include<stdio.h>
void main(){
    int marks[5];
    int sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++){
        sum=sum+marks[i];
    }
    int average=sum/4;
    printf("the average marks is %d",average);

}