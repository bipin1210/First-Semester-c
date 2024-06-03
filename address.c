#include<stdio.h>
void main(){
    int i=3;
    printf("adress of i=%u\n",&i);
    printf("value of i is %d\n",i);
    printf("value of i is %d",*(&i));//pointer address ko agadi halde value dinxa.
    //i=*(&i)
    /*
    the expression '&i" gives address of variable i.
    the address can be collected in a variable- j=&i.
    remember that j is not a ordinary variable like any other variables.
    it is a variable that contains the address of other variables.
    since j is a variable the compiler must provide it a space in a memory.
        i's value 3 and j's value is address 
    we can't use j in a program without declaring it.
     (important)  so we decalre it like this: int *j  
   (important)   so printf("i=%d,"*j) gives 3.
    this declaration tells the compiler that j will be used to store address of a integer value not any other datatypes.
    in other words j points to an integer
    */
}
/*
justifying the usage of * in declaration int*j
*--> stands for value at address
int *j would mean value at adress contained in j is int.
*/