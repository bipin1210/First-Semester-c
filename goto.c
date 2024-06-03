#include<stdio.h>
void main() {

    int num;
    printf("enter the number:");
    scanf("%d",&num);

   if(num%2==0){
    goto even;
   }
 else{
    goto odd;
 }
  even:printf("%d is the even number",num);
  goto end;
  odd:printf("%d is the odd number",num);
  goto end;
end:printf("\n end of program");
}