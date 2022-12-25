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
 struct node* getnode(){
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
 void insbeg(int x)
 {

   struct  node* p;
   p =getnode();
   p->next=start;
   p->data=x;
   start=p; 
 }
 void insend(int x)
 {

   struct node* p,* temp;
   p=getnode();
   p->data=x;
  temp=start;
  while(temp->next!=NULL)
  {
   temp=temp->next;
  }
  temp->next=p;
  p->next=NULL;
  
  }
  void inskey(int x,int k)
  {
   struct node* p,* temp;
   p=getnode();
   p->data=x;
   temp=start;
   while(temp->data!=k && temp!=NULL)
   {
      temp=temp->next;
   }
   p->next=(temp->next);
   temp->next=p;
   
  }

  int delstrt()
  {
   struct node* temp;
   temp = start;
   start=temp->next;
   int x= temp->data;
   free(temp);
   return x;
  }
int delend()
{
   struct node* temp,* temp1;
   temp=start;
   while(temp->next!=NULL)
   {
       temp1=temp;
       temp=temp->next;
   }
   temp1->next=NULL;
     int x= temp->data;
   free(temp);
   return x;
}
int delkey(int k)
{
   struct node*  temp,* temp1;
   temp=start;
   while(temp->data!=k)
   {
       temp1=temp;
       temp= temp->next;
   }
   temp1->next=temp->next;
   temp->next=NULL;
   int x= temp->data;
   free(temp);
   return x;


}
 void count()
 {
   int c=0;
   struct node* temp;
   temp=start;
   while(temp!=NULL)
   {
      temp=temp->next;
       c++;
   }
   printf("\nno. of node %d",c);
 }

 void display(){
   struct node* temp;
   temp=start;
   while(temp!=NULL){
      printf("%d ",temp->data);
      temp=temp->next;
   }
  
 }

 void main()
 {
  insbeg(2);
  insbeg(3);
  insbeg(5);
  delstrt();
  insend(9);
  inskey(8,2);
  delend();
  delkey(2);
display();
  count();
  
 }
