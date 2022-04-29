#include<stdio.h>
int main()
{
    int i,n,f;
    f=0;
    printf("number?\n");
    scanf("%d", &n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            {
                f=1;
                break;
            }
    }
    if(f==1)
        printf("it is not a prime numb.\n");
        else
            printf(" It is a prime number.\n");
    return 0;
}
