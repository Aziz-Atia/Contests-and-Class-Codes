#include<stdio.h>
struct member
{
    char name[100];
    int age;
    char last_degree[100];
    char occupation[100];
    int salary;

} member1, member2;

int main()
{
    printf("1st member:\n");
    printf("name:\n");
    scanf("%s", member1.name);
    printf("age:\n");
    scanf("%d", &member1.age);
    printf("last degree:\n");
    scanf("%s", member1.last_degree);
    printf("occupation:\n");
    scanf("%s", member1.occupation);
    printf("salary:\n");
    scanf("%d", &member1.salary);
    printf("2nd member:\n");
    printf("name:\n");
    scanf("%s", member2.name);
    printf("age:\n");
    scanf("%d", &member2.age);
    printf("last degree:\n");
    scanf("%s", member2.last_degree);
    printf("occupation:\n");
    scanf("%s", member2.occupation);
    printf("salary:\n");
    scanf("%d", &member2.salary);

    return;

}
