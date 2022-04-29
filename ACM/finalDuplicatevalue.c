#include<stdio.h>
int main()
{
    int i,j,n,a[10],dupelement;
    printf("Enter n?\n");
    scanf("%d",&n);
    printf("Enter array::\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=2;i<=n;i++)
    {
        for(j=i-1;j<i;j++)
        {
            if(a[i]==a[j])
                dupelement=a[i];
        }
    }
    printf("Duplicate element is:: %d\n",dupelement);
    return 0;
}
