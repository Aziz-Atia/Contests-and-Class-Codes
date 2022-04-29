#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    srand(time(NULL));
    int x=rand();
    printf("n and x?\n");
    scanf("%d%d",&n,&x);
    printf("Random Variables are::\n");
    for(i=0; i<n; i++)
        printf("%d\n",rand()%51);
    return 0;
}
