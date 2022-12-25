#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
 struct node
 {
    int data;
    struct node*next;

 };
 struct node* start=NULL;

 struct node* getnode()
 {
    struct node* p;
    p=(struct node* )malloc(sizeof(struct node));
    return p;
 }

 void insbeg(int x)
 {
    struct node* p,* temp;
    p=getnode();
    p->data=x;
    p->next=start;
    start=p;
 }

 void display()
 {
    
    struct node* temp;
    temp=start;
    while(temp->next!=start)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
 }
  void main()
  {
    insbeg(5);
    insbeg(4);
    insbeg(3);
    display();
  }