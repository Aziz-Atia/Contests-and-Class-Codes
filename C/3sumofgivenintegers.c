#include<stdio.h>
int main()
{
    int i,n,sum;
    sum=0;
    printf("number?\n");
    scanf("%d", &n);
    for(;n>=1;){
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("sum=%d\n",sum);

    return 0;
}
