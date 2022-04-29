#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int n,i,m;
void insloc();

struct linked_list{
	int num;
	struct linked_list *next;
};

typedef struct linked_list node;
node *start,*ptr,*save,*loc,*neu;
node *findA();

int main()
{

	//clrscr();
	start=(node *)malloc(sizeof(node));
	ptr=start;
	printf("\n\nHow many elements :");
	scanf("%d",&n);
	printf("\n\nGive the numbers :");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&ptr->num);
		if(i!=n)
		{
			ptr->next=(node *)malloc(sizeof(node));
			ptr=ptr->next;
		}
	}
	ptr->next=0;
	printf("\n\nPlease give the item you want to insert :");
	scanf("%d",&m);
	findA();
	insloc();
	getch();
	return 0;
}
node *findA()
{
	if(start==0)
	{
		loc=0;
		return loc;
	}
	else if(m<start->num)
	{
		loc=0;
		return loc;
	}
	else
	{
		save=start;
		ptr=start->next;
		while(ptr!=0)
		{
			if(m<ptr->num)
			{
				loc=save;
				return loc;
			}
			else
			{
				save=ptr;
				ptr=ptr->next;
			}
		}
		if(ptr==0)
		{
			loc=save;
			return loc;
		}

	}
}
void insloc()
{
	neu=(node *)malloc(sizeof(node));
	neu->num=m;
	if(loc==0)
	{
		neu->next=start;
		start=neu;
	}
	else
	{
		neu->next=loc->next;
		loc->next=neu;
	}
	ptr=start;
	printf("\n\nThe linked listed numbers :");
	while (ptr!=0){
		printf("%d ",ptr->num);
		ptr=ptr->next;
	}
}
