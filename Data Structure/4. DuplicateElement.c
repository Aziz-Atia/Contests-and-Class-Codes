#include<stdio.h>
int main()
{
    int i,j,a[10];
    for(i=1; i<=5; i++)
        scanf("%d",&a[i]);
    for(i=1; i<=5; i++)
     {

       //j++;
        for(j=i+1; j<=5; j++)
        {
            if(a[i]==a[j])
            {
                printf("Duplicate element is %d\n",a[i]);

            }

              //  j++;
        }
     }
    return 0;
}
