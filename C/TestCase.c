#include<stdio.h>
int main()
{
    int max,i,n,t,num[10],c;
    printf("How many times?\n");
    scanf("%d",&t);
    while(t--)
    {
        printf("How many numbers?\n");
        scanf("%d",&n);
        printf("Enter numbers?\n");
        for(i=1; i<=n; i++)
        {
            scanf("%d",&num[i]);
        }
        max=num[1];
        c=0;
        for(i=1; i<=n; i++)
        {
            c=0;
            if(max<num[i])
            {
                max=num[i];
            }

        }
        for(i=1;i<=n;i++)
        {
            if(max==num[i])
                c++;
        }
        printf("max is %d and it is in %d index\n",max,c);
    }
    return 0;
}
