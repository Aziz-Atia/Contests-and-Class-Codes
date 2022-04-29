#include<stdio.h>
int main()
{
    int k,ptr,n,c,data[15],swap;
    printf("n?\n");
    scanf("%d",&n);
    printf("Enter Array:: \n");
    for(k=1; k<=n; k++)
        scanf("%d",&data[k]);
    c=0;
    for(k=1; k<=n; k++)
    {
        ptr=1;
        while(ptr<=n-k)
        {
            if(data[ptr]>data[ptr+1])
            {
                swap=data[ptr];
                data[ptr]=data[ptr+1];
                data[ptr+1]=swap;
                c++;
            }
            ptr++;
        }

    }
    printf("swapped:: %d\n",c);
    printf("Sorted Array is :: \n");
    for(k=1; k<=n; k++)
        printf("%d\n",data[k]);
    return 0;
}
