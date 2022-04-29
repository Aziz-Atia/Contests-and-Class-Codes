#include<stdio.h>
int main()
{
    int f,n,i;
    f=0;
    printf("the number?\n");
    scanf("%d", &n);
    for(i=2;i<n;i++)
    {
        if(n%i==0){
            printf("not prime\n");
            f=1;
            break;
        }
    }
    if(f==0)
        printf("prime\n");

    return 0;
}
