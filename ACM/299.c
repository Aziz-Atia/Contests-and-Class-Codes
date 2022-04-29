#include<stdio.h>
int main()
{
    int n,l,i,k,s,ptr,swap,a[10];
    scanf("%d",&n);
    for(k=1; k<=n; k++)
    {
        scanf("%d",&l);
        for(i=1; i<=l; i++)
            scanf("%d",&a[i]);
        s=0;
        for(i=1; i<=l; i++)
        {
            ptr=1;
            while(ptr<=l-i)
            {
                if(a[ptr]>a[ptr+1])
                {
                    //swap=a[ptr];
                   // a[ptr]=a[ptr+1];
                    //a[ptr+1]=swap;
                    s++;
                }
                ptr++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",s);
    }
    return 0;

}
