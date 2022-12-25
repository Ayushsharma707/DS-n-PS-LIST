#include<stdio.h>
#define size 10
struct stack
{
    int ele[size];
    int  top;
};

void init(struct stack* );
int push();
int pop();
void display();
int binarynumber();

void main()
{
    struct stack s;
    int rem ,n;
    printf("enter the decimal no.");
    scanf("%d",&n);
    binarynumber(&s,rem,n);
}

void intit(struct stack* s)
{
    s->top=-1;
}
int binarynumber(struct stack* s,int rem,int n)
{
  while(n>2 || n==2)
  {
    rem=n%2;
    n=n/2;
    binarynumber(struct stack* s,int rem,int n)
  }
}

