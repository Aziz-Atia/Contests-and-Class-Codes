#include<stdio.h>
#include<stdlib.h>
int main()
{
    int numb,n,anumb;
    printf("enter any integer number?\n");
    scanf("%d", &numb);
    printf("how many place you want to shift?\n");
    scanf("%d", &n);
    anumb=numb<<n;
    printf("%d bit left shifted number is:: %d\n", n,anumb);
    anumb=numb*(pow(2,n));
    printf("%d bit left shifted number is:: %d\n",n,anumb);
    return 0;
}

