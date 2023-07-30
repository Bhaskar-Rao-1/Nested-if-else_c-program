#include<stdio.h>

int main()
{
    int num;
    printf("enter number\n");
    scanf("%d",&num);
    if(num>=0) {
        printf("it is a positive number\n");
        if(num%2==0) {
            printf("it is even number\n");
        }
        else {
            printf("it is odd number\n");
        }

    }
    else {
        printf("it is a negative number\n");
        if(num%2==0) {
            printf("it is even number\n");
        }
        else {
            printf("it is odd number\n");
        }
    }
    return 0;
}