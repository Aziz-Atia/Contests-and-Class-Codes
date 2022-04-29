#include<stdio.h>
int main()
{
    int m=1,n=1,fn;
    printf("value of n?\n");
    scanf("%d", &n);
    fn=m+n;
    while(fn<=n)
    {
        printf("the value of fn is %d\n",fn);
        n=fn+n;
        fn++;
        printf("%d th digit is %d",n,fn);
        break;
    }


    return 0;
}
