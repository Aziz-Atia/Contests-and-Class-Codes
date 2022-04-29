#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double avg,sum=0,da,db,dh,dl,high,low,x[10];
    int t,i,n;
    while(scanf("%d",&t))
    {
        scanf("%lf%lf%lf",&n,&low,&high);
        for(i=1; i<=n; i++)
            scanf("%lf",&x[i]);
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+x[i];
            sum++;
        }
        printf("%lf\n",sum);
        avg=sum/(double)n;
        for(i=1;i<=n;i++)
        {
            da=fabs(x-avg);
            dl=fabs(x-low);
            dh=fabs(x-high);
            db=min(dl,dh);
            if(db<da)
            {
                printf("%lf is an outlier \n",x[i]);
            }
        }

    }
}
