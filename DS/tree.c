#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
 
struct node 
{
    int data;
    struct node* l;
    struct node* r;
};
struct node* getnode(int x)
{
    struct node* p;
    p=(struct node* )malloc(sizeof(struct node));
   p->data=x;
   p->l= NULL;
   p->r=NULL;
   return p;

}
void preorder(struct node* p)
{
    if(p!=NULL)
    {
        printf("\n%d",p->data);
        preorder(p->l);
        preorder(p->r);
    }
}
void postorder(struct node* p)
{
    
    if(p!=NULL)
    {
        postorder(p->l);
        postorder(p->r);
        
        printf("\n%d",p->data);
    }
}
void inorder(struct node* p)
{
    if(p!=NULL)
    {
        inorder(p->l);
        printf("\n%d",p->data);
        
        inorder(p->r);
    }
}
int countnode(struct node* p)
{
    if(p==NULL)
    {
        return 0;
    }
    else
    {
      return (1+countnode(p->l)+countnode(p->r));
    }
}
int countleafnode(struct node* p)
{
    if(p==NULL)
      {
       return 0;
      } 
    if((p->l==NULL) && (p->r==NULL))
      {
        return 1;
      }  
    else{
        return (countleafnode(p->l)+countleafnode(p->r));
    }    
    
}

// nodes having one child

int nodewithonechild(struct node* p)
{
    if(p==NULL || (p->l==NULL && p->r==NULL))
    {
        return 0;
    }
    if((p->l!=NULL && p->r==NULL) ||(p->r!=NULL && p->l==NULL) )
    {
        return 1;
    }
    else{
        return (nodewithonechild(p->l)+nodewithonechild(p->r));
    }
}

// node wuth two child

int nodewithtwochild(struct node* p)
{
    if(p==NULL)
      return 0;
    if(p->l!=NULL && p->r!=NULL)
      return 1;
    else
      return (nodewithtwochild(p->l)+nodewithtwochild(p->r));    
}
// sum of node

int sumofnode(struct node* p)
{
    if(p==NULL)
      return 0;
    else{
        return (p->data + sumofnode(p->l)+sumofnode(p->r));
    }    
}
//checking if tree is bst or not


int main()
{
   struct node* n1,* n2,* n3,* n4,* n5;
   n1=getnode(2);
   n2=getnode(4);
   n3=getnode(5);
   n4=getnode(6);
   n5=getnode(9);

   n1->l=n2;
   n1->r=n3;
   n3->l=n4;
   n3->r=n5;
   printf("\npreorder");
   preorder(n1);
   printf("\npostorder");
   postorder(n1);
   printf("\ninorder");
   inorder(n1);
   int c,cl,ocl,tcl,s;
   c=countnode(n1);
   printf("\nno of nodes  in tree");
   printf("\n%d",c);
   printf("\ncount leaf node");
   cl=countleafnode(n1);
   printf("\n%d",cl);
   printf("\nnode haveing one child");
   ocl=nodewithonechild(n1);
   printf("\n%d",ocl);
   printf("\nnode with two children");
   tcl=nodewithtwochild(n1);
   printf("\n%d",tcl);
printf("\nsum of node");
s=sumofnode(n1);
printf("%d",s);


}
