#include<stdio.h>
int main()
{
    int ptr,n,i,item,start,info[20],link[20];
    printf("Enter n and info?\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&info[i]);
    }
    printf("Start?\n");
    scanf("%d",&start);
    ptr=start;
    while(ptr!=NULL)
    {
        info[ptr];
        ptr=link[ptr];
    }
    printf("Traversed info is::\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",info[i]);
    }
    printf("Enter item?\n");
    scanf("%d",&item);
    if(item==info[ptr])
    {
        printf("%d\n",ptr);
        ptr=link[ptr];
    }
    else
    {
        printf("Not Found!\n");
    }
    return 0;
}
