#include<stdio.h>
int main()
{
    char name[9];
    int unit;
    float cost,surcharge;
    printf("please enter your name how many units of electricity you have used :\n");
    scanf("%s %d",name, &unit);
    if(unit<=100){
        cost=unit*1.75;
        printf("%s ,your bill is %f\n",name, cost);
    }
    else if(unit>100 && unit<=300){
        cost=unit*2.25;
        printf("%s ,your bill is %f\n",name, cost);
    }
    else if(unit>300){
        cost=unit*3.50;
        printf("%s ,your bill is %f\n", name, cost);
    }
    else if(cost>1000){
            surcharge=cost*0.15;
            printf("and your surcharge is %f\n", surcharge);
    }
    else
        printf("%c ,your bill is 100 Taka\n",name);

    return 0;
}
