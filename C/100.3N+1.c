#include<stdio.h>
int main()
{
    int i,n,r;
    printf("enter any integer less than 1000 and greater than 0?\n");
    scanf("%d",&n);
    while(r!=0)
    {
        r=n%2;
        if(n%2==0)
        {
            n=n/2;
            printf("%d\n",n);
        }
        else if(n%2!=0)
        {
            n=3*n+1;
            printf("%d\n",n);
        }
        else
            printf("STOP\n");
    }

}
