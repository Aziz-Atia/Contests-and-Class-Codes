#include<stdio.h>
int main()
{
    int k,n,data[10],num;
    printf("n?\n");
    scanf("%d",&n);
    printf("Array?\n");
    for(k=1; k<=n; k++)
        scanf("%d",&data[k]);
    for(k=1; k<=n; k++)
    {
        if(data[k]>n)
        {
            num++;

            printf("%d\n",data[k]);
        }
    }
    return 0;
}
