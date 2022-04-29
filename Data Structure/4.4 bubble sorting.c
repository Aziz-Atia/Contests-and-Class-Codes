#include<stdio.h>
int main()
{
    int data[10],i,ptr,n,temp;
    printf("value of n?\n");
    scanf("%d", &n);
    printf("array?\n");
    for(i=1; i<=n; i++)
        scanf("%d", &data[i]);
    for(i=1; i<=n-1; i++)
    {
        for(ptr=1; ptr<=n-i; ptr++)
        {
            if(data[ptr]>data[ptr+1])
            {
                temp=data[ptr];
                data[ptr]=data[ptr+1];
                data[ptr+1]=temp;
            }
        }
    }
    printf("sorted array is::\n");
    for(i=1; i<=n; i++)
        printf("%d\n", data[i]);
    return 0;
}
