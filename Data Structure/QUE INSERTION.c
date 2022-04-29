#include<stdio.h>
int main()
{
    int i,n,item,front,rear,que[12];
    printf(" n? front rear and item?\n");
    while(scanf("%d%d%d%d", &n,&front, &rear, &item))
    {
        printf("enter array::\n");
        for(i=front; i<=rear; i++)
        {
            scanf("%d",&que[i]);
        }
        if(front==1 && rear==n || front==rear+1)
        {
            printf("Overflow\n");
            return ;
        }
        if(front==0 && rear==0)
        {
            front=1;
            rear=1;
        }
        else if(rear==n)
        {
            rear=1;
        }
        else
        {
            rear=rear+1;
        }
        que[rear]=item;
        printf("Inserted Array is ::\n");
        for(i=1; i<=n; i++)
            printf("%d ",que[i]);//}
    }
    return 0;
}
