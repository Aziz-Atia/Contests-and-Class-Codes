#include <stdio.h>
double absl(double x)
{
    if(x<0) return x*(-1);
    else return x;
}


int main()
{
    int T,c;
    scanf("%d",&T);
    c=T;
    while(T--)
    {

        double h,l;
        int N,i;
        scanf("%d %lf %lf",&N,&l,&h);
        double ara[N];
        for(i=0; i<N; i++) scanf("%lf",&ara[i]);


        double sum=0,avg=0;
        for(i=0; i<N; i++) sum=sum+ara[i];
        avg=sum/N;


        double ans[N];
        for(i=0; i<N; i++) ans[i]=-1;
        int j=0;


        for(i=0; i<N; i++)
        {
            double x=ara[i];
            double Da=absl(x-avg);
            double Dl=absl(x-l);
            double Dh=absl(x-h);
            double Db;
            if(Dl<=Dh) Db=Dl;
            else Db=Dh;
            if(Db<Da)
            {
                ans[j]=x;
                j++;
            }

        }


        printf("Case %d:\n",c-T);
        for(i=0; i<N; i++) if(ans[i]!=-1) printf("%0.2lf\n",ans[i] );

        if(j<1) printf("No outliers\n");

    }

    return 0;

}
