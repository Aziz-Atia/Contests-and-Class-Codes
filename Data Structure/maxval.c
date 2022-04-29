#include<stdio.h>
int main()
{
    int k,max,n,loc,data[10];
    printf("n?\n");
    scanf("%d", &n);
    printf("array:: \n");
    for(k=1;k<=n;k++)
    {
        scanf("%d",&data[k]);
    }
    data[k]=1;
    for(k=1;k<=n;k++)
    {
        if(data[k]>max)
        {
            max=data[k];
            loc=k;
        }
    }
    printf("max value is %d and location is %d",max,loc);
    return 0;
}
