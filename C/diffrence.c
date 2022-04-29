#include<stdio.h>
int main()
{
    int a,b,diffrence;
    printf("ENTER ANY TWO INTEGER NUMBERS:\n");
    scanf("%d %d", &a, &b);
    diffrence=a-b;
    if(diffrence>=0){
        printf("THE DIFFRENCE IS %d", diffrence);}
    else{
        printf("THE DIFFRENCE IS %d", diffrence*(-1));}
    return 0;
}
