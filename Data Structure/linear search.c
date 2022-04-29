#include<stdio.h>
int main()
{
    int loc,k,item,n,data[10];
    printf("n and item?\n");
    scanf("%d %d",&n, &item);
    printf("enter array::\n");
    for(k=1;k<=n;k++)
        scanf("%d",&data[k]);
    loc=0;
    k=1;
    while(k<=n && k++)
    {
        if(item==data[k])
        {
            loc=k;
            printf("Item is in location %d\n",loc);
        }
    }
    if(loc==0)
        printf("Search Result:: Item not found!\n");
    return 0;
}
