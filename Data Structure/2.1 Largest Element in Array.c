#include<stdio.h>
int main()
{
    int i,n,max,loc,data[10];
    printf("enter the value of n?\n");
    scanf("%d", &n);
    printf("The Array?\n");
    for(i=1; i<n; i++)
        scanf("%d", &data[i]);
    max=data[1];
    for(i=1;i<n;i++)
    {
        if(data[i]>max)
        {
            max=data[i];
            loc=i;
        }
    }
    printf("%d %d\n",max,loc);
    return 0;
}
