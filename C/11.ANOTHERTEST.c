#include<stdio.h>
#include<ctype.h>
main()
{
    FILE *fpt;
    char array[50];
    char c[50];
    printf("enter any text?\n");
    gets(array);
    fpt=fopen("TEST.DAT", "w");
    fprintf(fpt, "%s\n",array);
    fclose(fpt);
    fpt=fopen("TEST.DAT", "r");
    fscanf(fpt, "%s\n", &c);
    printf("%s",c);
    fclose(fpt);
    return 0;
}
