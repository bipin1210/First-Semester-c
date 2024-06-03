#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp1;
    int ch;
    fp1=fopen("text.txt","w");
    if(fp1==NULL){
        printf("no file found");
        exit(1);
    }
else{
    printf("enter text:");
    while(ch!=EOF){
        ch=getchar();
        fputc(ch,fp1);
    }
    fclose(fp1);
}
}