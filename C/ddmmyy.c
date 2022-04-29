#include<stdio.h>
int main()
{
    int d,m, y;
    printf("enter your date in dd-mm-yy form:\n");
    scanf("%d %d %d", &d, &m, &y);
    switch(m)
    {
    case 1:
        printf("JANUARY");
        break;
    case 2:
        printf("FEBRUARY");
        break;
    case 3:
        printf("MARCH");
        break;
    case 4:
        printf("APRIL");
        break;
    case 5:
        printf("MAY");
        break;
    case 6:
        printf("JUNE");
        break;
    case 7:
        printf("JULY");
        break;
    case 8:
        printf("AUGUST");
        break;
    case 9:
        printf("SEPTEMBER");
        break;
    case 10:
        printf("OCTOBER");
        break;
    case 11:
        printf("NOVEMBER");
        break;
    case 12:
        printf("DECEMBER");
        break;

    }


    switch(d)
    {
    case 1:
    case 21:
    case 31:
        printf("\t%d st", d);
        break;
    case 2:
    case 22:
        printf("\t%d nd", d);
        break;
    case 3:
    case 23:
        printf("\t%d rd", d);
        break;
    default:
        printf("\t%d th", d);
        break;
    }
    printf(",%d\n", y);


    return 0;
}
