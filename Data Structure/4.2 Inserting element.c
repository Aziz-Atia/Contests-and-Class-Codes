#include<stdio.h>
int main()
{
    int la[10],n,k,i,j,item;
    printf("n,k and item?\n");
    scanf("%d %d %d", &n,&k,&item);
    printf("Array?\n");
    for(i=1;i<=n;i++)
        scanf("%d",&la[i]);
    for(j=n;j>=k;j--)
        la[j+1]=la[j];
    la[k]=item;
    n=n+1;
    printf("Element inserted array is::\n");
    for(i=1;i<=n;i++)
        printf("%d\n",la[i]);

    return 0;
}
