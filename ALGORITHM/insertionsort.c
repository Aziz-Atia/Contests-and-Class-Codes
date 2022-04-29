#include<stdio.h>
int n,a[100];
void Insertion()
{
    int i,j,k;
    for(j=2; j<=n; j++)
    {
        k=a[j];
        i=j-1;
        while(i>0 && a[i]>k)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=k;
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
