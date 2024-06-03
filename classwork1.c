#include<stdio.h>
void display(char name[],int rollno,float marks);
struct student{
    char name[20];
    int roll_number;
    float marks;
};
void show( struct student b);


void main(){
struct student st={"hari",1,99};
//display(st.name,st.rollno,st.marks);
show(st);
}
void display(char name[],int rollno,float marks){
    printf("name:%s\t,rollno:%d\t ,marks:%f\t",name,rollno,marks);
}
void show( struct student b){
    printf("name:%s\t",b.name);
    printf("rollno:%d\t",b.roll_number);
    printf("marks:%.2f\t",b.marks);
}