#include<stdio.h>
#include<conio.h>
/* to mention the following header file in the program will help you
   to create Linked List easily */
#include<linklib.h>
int menu()
{
	int choice;
	printf("\n1. create node");
	printf("\n2. insert node at last");
	printf("\n3. delete node at first");
	printf("\n4. delete node at last");
	printf("\n5. view list");
	printf("\n6. search element");
	printf("\n7. exit");
	printf("\n\nenter your choice");
	scanf("%d",&choice);
	return choice;
}

void main()
{
       int item;

    while(1)
    {
	clrscr();

	switch(menu())
	{
	    case 1:
		      /* to create & insert a node at first, call the
			  following function as displayed */
		     insert_at_first();
		      break;
	    case 2:
		      /* to insert a node at last, call the
			  following function as displayed */
		     insert_at_last();
		     break;
	    case 3:
		      /* to delete a node at first, call the
			  following function as displayed */
		     delete_at_first();
		     break;
	    case 4:
		       /* to delete a node at last, call the
			  following function as displayed */
		     delete_at_last();
		      break;
	    case 5:
		     /*for travesing the list, call the function
		       viewList() */
		     viewList();
		     break;
	    case 6:
		     printf("enter value to search");
		     scanf("%d",&item);
		     /*to search an element in the list, call the following
		       function in displayed manner */
		     search(item);
		     break;
	    case 7:
		      exit(0);
	    default:
		       printf("invalid entry");

	}
	getch();
    }
}
