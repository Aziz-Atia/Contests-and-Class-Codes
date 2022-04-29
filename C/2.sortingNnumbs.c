#include<stdio.h>
void reorder(int n, int x[]);
main()
{
    int i, n, x[100];
    printf("how many numbers?\n");
    scanf("%d", &n);
    for(i=0;i<n;++i)
    {
        printf("i=%d, x=\n", i+1);
        scanf("%d", &x[i]);
    }
    reorder(n,x);
    printf("\n\n reordered list of numbers:\n\n");
    for(i=0;i<n;++i)
        printf("i=%d x=%d\n",i+1,x[i]);
    void reorder(int n, int x[])
    {
        int i, item, temp;
        for(item=0;item<n-1;++item)
            for(i=item+1;i<n;++i)
        if(x[i]<x[item]){
            temp=x[item];
            x[item]=x[i];
            x[i]=temp;
        }
    }
    return;
}
