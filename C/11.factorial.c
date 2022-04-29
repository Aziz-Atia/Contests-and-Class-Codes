#include<stdio.h>
int main()
{
    int n,i,f;
    f=1;
    printf("the numb?\n");
    scanf("%d", &n);
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    printf("the factorial value is %d\n",f);
    return 0;
}
