#include<stdio.h>
int main()
{
    int i,n,r;
    int x[10];
    printf("integer number?\n");
    scanf("%d", &n);
    i=0;
    while(n!=0)
    {
        r=n%2;
        x[i]=r;
        n=n/2;
        i++;
    }
     for(i=i-1;i>=0;i--)
    printf("%d", x[i]);

    return 0;
}
