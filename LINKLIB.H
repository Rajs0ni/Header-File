#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert_at_first(void);
void insert_at_last(void);
void delete_at_first(void);
void delete_at_last(void);
void viewList(void);

typedef struct node
{
   int info;
   struct node *link;
}NODE;

struct node *START=NULL;

struct node* createNode()
 {
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
 }

   void insert_at_first()
 {
     node *temp;
     temp=createNode();
       printf("\nEnter a Number\n");
       scanf("%d",&temp->info);
       temp->link=NULL;
   if(START==NULL)
      START=temp;
   else
   {
      temp->link=START;
      START=temp;
   }
}
 void insert_at_last()
   {
     struct node *temp,*t;
     temp=createNode();
	printf("\nEnter a Number\n");
	scanf("%d",&temp->info);
	temp->link=NULL;
     if(START==NULL)
	START=temp;
     else
      {
	t=START;
	while(t->link!=NULL)
	t=t->link;
	t->link=temp;
      }
   }

 void delete_at_first()
 {
   struct node *r;
   if(START==NULL)
      printf("\nEmpty list\n");
   else
     {
	r=START;
	START=START->link;
	free(r);
     }
  }
 void delete_at_last()
  {
    node *t,*r;
    if(START==NULL)
       printf("\nEmpty List\n");
    else
    {
      t=START;
      while(t->link!=NULL)
       {
	 r=t;
	 t=t->link;
       }
     r->link=NULL;
     free(t);
    }
 }
void viewList()
{
  struct node *t;
  if(START==NULL)
    printf("\nEmpty List\n");
  else
  {
     t=START;
     while(t!=NULL)
      {
	printf("%d ",t->info);
	t=t->link;
      }
  }
}
void search(int item)
{     struct node *t;
      t=START;
      while(t!=NULL)
      {
	if(item==t->info)
       {
	printf("\nFOUND\n");
	break;
       }
	else
	t=t->link;
      }
      if(t==NULL)
      printf("\nNOT FOUND\n");
}
