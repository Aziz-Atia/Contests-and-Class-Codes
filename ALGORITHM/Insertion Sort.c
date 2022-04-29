#include<stdio.h>
int n,a[100];
void Insertion()
{
    int i,j,key;
    for(j=1; j<=n; j++)
    {
        key=a[j];
        i=j-1;
        while(i>0 &&a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
        printf("i=%d, j=%d, key=%d\n",i,j,key);
        for(i=1; i<=n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
int main()
{
    int i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    Insertion();
    for(i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
