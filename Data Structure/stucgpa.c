#include<stdio.h>
int main()
{
    int c,k;
    float stucgpa[100];
    c=0;
    printf("Results?\n");
    for(k=14001;k<=14004;k++)
        scanf("%d", &stucgpa[k]);
    for(k=14001;k<=14099;k++)
    {
        if(stucgpa[k]>3.50)
            printf("%f",k);
    }
    for(k=14001;k<=14099;k++)
    {
        if(stucgpa[k]>3.75)
        {
            c++;
            printf("%d\n", c);
        }
    }

    return 0;
}
