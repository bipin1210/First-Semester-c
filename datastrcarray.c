#include<stdio.h>
#define size 3
    struct student{
        char name[10];
        int rollno;
        float marks;
    } ;
    void main() {
        struct student st[size];
    for(int i=0;i<size;i++) {
        printf("enter the detail of student: %d\n",i+1);
        printf("enter name,rollno and marks");
        scanf("%s %d %f",st[i].name,&st[i].rollno,&st[i].marks);

    }
    printf ("detail of student are\n");
    for(int i=0;i<size;i++){
        printf("\n the detail of student: %d\n",i+1);
        printf("\n name %s rollno %d marks %.2f",st[i].name,st[i].rollno,st[i].marks);


    }

    printf("\n name %s rollno %d marks %.2f",st[2].name,st[2].rollno,st[2].marks);
    
    }