#include<stdio.h>
int main()
{
    int la[10],n,i,j,k,item;
    printf("n,k and item?\n");
    scanf("%d %d %d",&n, &k, &item);
    printf("array?\n");
    for(i=1;i<=n;i++)
        scanf("%d",&la[i]);
    for(j=n;j<=k;j--)
        la[j+1]=la[j];
    item=la[i];
    n++;
    printf("deleted element array is::\n");
    for(i=1;i<=n;i++)
        printf("%d\n", la[i]);
    return 0;

}
