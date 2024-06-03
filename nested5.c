
#include<stdio.h>
void main() {
  int i,j;
  int val=0;
  for(i=1;i<=4;i++){
    for(j=1;j<=i;j++){
        val++;
        printf(" %d",val);
    }
    printf("\n");
  }  
}