#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,a[10],max,n,m;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    max=a[0]*a[1];
    m=a[i-2]*a[n];
     printf("\nMaximum product is formed by (%d,%d)\n",max,m);

   // for(i=0; i<6; i++)
    //{
      //  for(j=i+1; j<6; j++)
        //{
            //max=a[i]*a[j];
            if(max<a[n-1]*a[n-2]);
                max=a[n-1]*a[n-2];
       // }
    //}
    printf("\nMaximum product is formed by (%d,%d)\n",max,a[j]);
    return 0;
}
