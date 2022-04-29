#include<stdio.h>
int main()
{
    int data[10],item,loc,i,n;
    printf("value of item and n?\n");
    scanf("%d %d",&item, &n);
    printf("array?\n");
    for(i=1; i<=n; i++)
        scanf("%d", &data[i]);
    loc=0;
    for(i=1; i<=n; i++)
    {
        if(data[i]==item)
        {
            loc=i;
            printf("location is :: %d\n",loc);
        }
    }
    if(loc==0)
        printf("Search Result:: Item not found\n");
    return 0;

}
