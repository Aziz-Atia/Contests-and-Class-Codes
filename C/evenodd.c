#include<stdio.h>
int main()
{
    int number;
    printf("enter any integer number:\n");
    scanf("%d", &number);
    if(number%2==0)
        printf("the number is even.\n");
    else if(number%2!=0)
        printf("the number is odd.\n");
    else
        printf("invalid input!\n");
    return 0;
}
