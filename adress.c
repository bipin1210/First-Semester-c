#include<stdio.h>
void main(){
    int i=3;
    printf("adress of i=%u",&i);
    printf("value of i is %d",i);
}
/*
&i to print address
it is printed using %u which is format specifier  for printing unsigned integer
the other pointer operator available in c is '*' also called value at address.
     -it gives the value stored at a particular address.
     the value at address operator is also called indirectional operator.
    
*/