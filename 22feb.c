#include<stdio.h>
void main() {
int num;
printf("enter your number:");
scanf("%d",&num);
if(num==0)
{
    printf("%d num is zero",num);
}
else if(num>0)
{
    printf("%d num is positive",num);

}

else{
    printf("%d num is negative",num);
}


}