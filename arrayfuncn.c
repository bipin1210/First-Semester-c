//wap to find element of array using function?
#include<stdio.h>
void search(int num[],int a);
void main(){
    int arr={1,2,3,4,5};
    search(arr[]);

}
void search(int num[]){
    printf("enter the number you want to search");
    scanf("%d",&a);
    int i;
    for(i=0;i<5;i++){
       if( num==arr[i])
        printf("%d is present in array",arr[i]);
        break;
    }
    if (i==6){
        printf("invalid");
}
}