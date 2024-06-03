#include<stdio.h>
#define SIZE 3
struct student
{
    char name[40];
    int roll;
    float submarks[3];
};
void main()
{
    struct student st[SIZE];
    for(int i=0; i<SIZE; i++)
    {
    printf("\n enter the details of students : %d \n", i+1);
    printf("----------------------------------------------------\n");
    printf("enter the name and roll no. : ");
    scanf("%s %d", st[i].name, &st[i].roll); 

    for(int i=0; i<SIZE; i++)
    {
        printf("marks for subject %d : ", i+1);
        scanf("%f", &st[i].submarks[i]);

    }
    }

    printf("\n the details of the students are : \n");
    printf("-----------------------------------------------------");
    for(int i=0; i<SIZE; i++)
    {
        printf("\n details of student %d", i+1);
        printf("\n-----------------------\n");
        printf("\n Name : %s \t Roll no. : %d \n", st[i].name, st[i].roll);
        printf("\n Marks Details : \t");
        for(int i=0; i<3; i++)
        {
            printf("\t Submarks[%d] : %.2f \t ", i+1, st[i].submarks[i]);
        }

    }

    printf("\n Roll no of third student : %d", st[2].roll);
}