#include<stdio.h>
#define SIZE 3
struct student{
    char name[10];
    int rollno;
    float marks;
};
void show(struct student st[SIZE]);
void main(){
    int i;
    struct student st[SIZE];
    printf("--------------------------------\n");
    printf("\nDetails of students\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter the name,rollno,marks of student %d:\n",i+1);
        scanf("%s %d %f",st[i].name,&st[i].rollno,&st[i].marks);
    }
    show(st); 
}
void show(struct student st[SIZE]){
    int i;
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nDetails of students %d are:",i+1);
        printf("\nName:%s\tRollno:%d\tMarks:%.2f",st[i].name,st[i].rollno,st[i].marks);
        printf("\n---------------------------\n");
    }
    printf("\nEnter which student information do you need:\n");
    scanf("%d",& i);
    printf("\nName:%s\tRollno:%d\tMarks:%.2f",st[i-1].name,st[i-1].rollno,st[i-1].marks);
    
}