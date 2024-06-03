#include <stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE];
    int i,a;
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter the index-%d:  \n", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value you want to search :");
    scanf("%d", &a);

        //linear search
    for (i = 0; i < SIZE; i++){
        if (arr[i] == a)
        {
            printf("%d is found on %d", a,i);
            break;
        }

    }

    if(i==SIZE)
    printf("INVALID");
int smallest=arr[0];
int largest=arr[0];
for(int i=1;i<SIZE;i++){
    if (smallest>arr[i]){
        smallest==arr[i];
    }
    if(largest<arr[i]){
        largest=arr[i];
    }
}
printf("\n%d is smallest",smallest);
printf("\n%d is largest",largest);
}