#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void beginsert();
void lastinsert();
void randominsert();
void display();
void main()
{
	int choice=0;
	while(choice!=0)
	{
		printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at random location\n4.display\n5.exit\n");
		printf("\nenter your choice\n");
		scanf("\n%d",&choice);
		switch(choice)
		{
			case 1: beginsert();
			        break;
			case 2: lastinsert();
				break;
			case 3: randominsert();
				break;
			case 4: display();
				break;
			case 5: exit(0);
				break;
			default: printf("please enter valid choice..");
		}
	}
}
void beginsert()
{
	struct node *temp;
	int item;
	temp=(struct node *)malloc(sizeof(struct node *));
	if(temp==0)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\nenter value:");
		scanf("%d",&item);
		temp->data=item;
		temp->next=head;
		head=temp;
		printf("\nnode inserted");
	}
}
void lastinsert()
{
	struct node *ptr,*temp;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==0)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\nenter value?\n");
		scanf("%d",&item);
		ptr->data=item;
		if(head==0)
		{
			ptr->next=0;
			head=ptr;
			printf("\nnode inserted");
		}
		else
		{
			temp=head;
			while(temp->next!=0)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->next=ptr;
			printf("\nnode inserted");
		}
	}
}
void randominsert()
{
	int i,loc,item;
	struct node *ptr,*temp;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==0)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\nenter element value");
		scanf("%d",&item);
		ptr->data=item;
		printf("\nenter the location after which you want to insert");
		scanf("\n%d",&loc);
		temp=head;
		for(i=0;i<loc;i++);
		{
			temp=temp->next;
			if(temp==0)
			{
				printf("\ncan't insert\n");
				return;
			}
		}
		ptr->next=temp->next;
		temp->next=ptr;
		printf("\nnode inserted");
	}
}
void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==0)
	{
		printf("nothing to print");
	}
	else
	{
		printf("\nprinting value......\n");
		while(ptr!=0)
		{
			printf("\n%d",ptr->data);
			ptr=ptr->next;
		}
	}
}

