#include<stdio.h>
#include<conio.h>
#define size 10 
typedef struct stack
{
   int ele[size];
   int top;
}stack_type;

void init(stack_type * );
int underflow(stack_type *);
int overflow(stack_type *);
int push(stack_type *, int);
int pop(stack_type *);
void display(stack_type *);
void main()
{
    stack_type s;
    int x, op;
    init(&s);
    do
    {
      printf("\n\nmenu\n1)PUSH\n2)POP\n3)DISPLAY\n4)EXIT");
      printf("\nenter your choice");
      scanf("%d",&op);
      switch(op)
      {
        case 1:printf("\nenter the number =");
        scanf("%d",&x);
        if(!overflow(&s))
            push(&s,x);
        else
           printf("\nstack is full");
        break;
        case 2:if(!underflow(&s))
             {
                x=pop(&s);
                printf("\n popped elemnt is%d",x);
             } 
             else{
                printf("\nstack is empty");
             }      
        break;  
        case 3: display(&s);
        break;   
      }
      
    }
    while(op!=4);
    
}
 void init(stack_type *s)
 {
    s->top= -1;
 }
 int underflow(stack_type *s)
 {
    if(s->top == -1)
    return 1;
    else
    return 0;
 }
 int overflow(stack_type *s)
 {
    if(s->top==size-1)
    return 1;
    else
    return 0;
 }
 int push(stack_type *s,int x)
 {
   s->top=s->top+1;
   s->ele[s->top]=x; 
 }
int pop(stack_type *s)
{
    int x;
    x=s->ele[s->top];
    s->top=s->top-1;
    return x;
}
void display(stack_type *s)
{
   int i;
   if(s->top==-1)
   {
    printf("\n stack is empty : no elemnt to display");
   }
   else {
    printf("\nstack contains the following elemnt");
    for(i=s->top;i>=0;i--)
    {
        printf("%d",s->ele[i]);
    }
   }
}
