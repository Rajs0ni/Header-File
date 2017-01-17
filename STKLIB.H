#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct ArrayStack
{
 int top,capacity;
 int *array;
 }STACK;
 struct ArrayStack* createStack(int cap)
 { struct ArrayStack *stack;
 stack=(struct ArrayStack *)malloc(sizeof(struct ArrayStack));
 stack->capacity=cap;
 stack->top=-1;
 stack->array=(int *)malloc(sizeof(int)*stack->capacity);
 return(stack);
 };
int isFull(struct ArrayStack *stack){

     if(stack->top==stack->capacity-1)
     return(1);
     else
     return(0);
 }
 int isEmpty(struct ArrayStack *stack){

  if(stack->top==-1)
  printf("\nSTACK IS EMPTY\n");
  else
  return 0;

 }

 void push(struct ArrayStack *stack,int item){
   if(!isFull(stack))
     { stack->top++;
       stack->array[stack->top]=item;

     }
 else
    printf("OVERFLOW");


 }
  int pop(struct ArrayStack *stack){
  int item;
  if(!isEmpty(stack)){
   item=stack->array[stack->top];
   stack->top--;
   return item;
  }
  return(0);
  }

