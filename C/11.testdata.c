#include<stdio.h>
#include<ctype.h>
main()
{
    FILE *fpt;
    char array[50];
    char filename[]="TEST.DAT";
    printf("enter any text?\n");
    gets(array);
    fpt=fopen("TEST.DAT", "w");
    fprintf(fpt, "%s\n",c);
    fclose(fpt);
    fpt=fopen("TEST.DAT", "r");
    fscanf(fpt, "%s\n", &array);
    fclose(fpt);
    return 0;
}
