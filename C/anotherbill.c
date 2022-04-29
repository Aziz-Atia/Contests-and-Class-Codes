#include<stdio.h>
int main()
{
    char name[9];
    float unit,cost, surcharge;
    printf("please enter your name and total units you have used this month:\n");
    scanf("%s %f", name , &unit);

    if (unit<=100){
        cost=unit*1.75;
        printf("%s ,your cost is %f\n",name, cost);}
    else if(unit>100 && unit<=300){
        cost=unit*2.25;
        printf("%s ,your cost is %f\n",name, cost);}
    else if(unit>300){
        cost=unit*3.50;
    {
        if(cost>1000){
            surcharge=cost*0.15;
            printf("%s ,your cost is %f and surcharge is %f\n",name, cost, surcharge);
        }
        else
            printf("%s ,your cost is %f and you have no surcharge.\n",name, cost);
    }
    }
    return 0;
}
