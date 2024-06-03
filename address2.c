#include<stdio.h>
void main() {
    int i=3;
    int *j;
    j=&i;

    printf("adress of i=%u\n",&i);
    printf("adress of i=%u\n",j);
    printf("adress of j=%u\n",&j);
    printf("value of j=%d\n",j);
    printf("value of i=%d  \n",i);
    printf("value of i=%d  \n",*(&i));
    printf("value of i=%d  \n",*j);
    
    
}