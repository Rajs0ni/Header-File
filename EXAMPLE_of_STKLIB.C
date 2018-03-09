#include<stdio.h>
#include<conio.h>
/* to mention the following header file will be helpful to create a stack
  without defining or creating any function for stack creation in the
  program */
#include<stklib.h>
int menu()
{
	 int choice;
	printf("\n1. create stack");
	printf("\n2. push value");
	printf("\n3. pop value");
	printf("\n4. exit");
	printf("\n\nenter your choice");
	scanf("%d",&choice);
	return choice;

}
void main()
{
      int capacity,item;
		   STACK *sk; // create a pointer variable of STACK type
   while(1)
   {
	clrscr();

       switch(menu())
       {
		case 1:   printf("enter capacity of stack");
			  scanf("%d",&capacity);
			  /*to create stack, call the function named
			     createStack() & pass the capacity in it
			     as displayed */
			  sk=createStack(capacity);
			  printf("stack is created");
			  break;

		case 2:
			  printf("enter value to push");
			  scanf("%d",&item);
			  /* to push the ITEM in stack, call the function
			      push() as displayed */
			  push(sk,item);
			  break;

		case 3:
			 /* to pop a value,call the function
			  pop() */
			 printf("popped value is %d",pop(sk));
			 break;

	       case 4:
			 exit(0);

	       default:
			 printf("invalid choice");
       }
       getch();
    }

}
