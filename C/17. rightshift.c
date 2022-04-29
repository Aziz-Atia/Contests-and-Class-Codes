#include<stdio.h>
#include<stdlib.h>
int main()
{
    int numb,n;
    printf("enter any integer number?\n");
    scanf("%d", &numb);
    printf("how many place you want to shift?\n");
    scanf("%d", &n);
    numb=numb>>n;
    printf("%d bit right shifted number is:: %d\n", n,numb);
    numb=numb/(pow(2,n));
    printf("%d bit right shifted number is:: %d\n",n,numb);
    return 0;
}
