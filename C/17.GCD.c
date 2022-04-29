#include<stdio.h>
int main()
{
    int i,n1,n2;
    printf("value of integers?\n");
    scanf("%d %d", &n1,&n2);
    for(i=2;i<=n1,i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0){
            printf("the gcd is %d\n", i);
            break;
        }
            else
            {
                printf("the gcd is 1.\n\n");
                break;
            }
        }

    return 0;
}
