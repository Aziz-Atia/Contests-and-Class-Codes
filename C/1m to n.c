#include<stdio.h>
int main()
{
    int m,n,i;
    printf("please enter the value of m and n:\n");
    scanf(" %d %d", &m, &n);
    for(i=m;i<=n;i++)
        printf("%d\n",i);
    return 0;
}
