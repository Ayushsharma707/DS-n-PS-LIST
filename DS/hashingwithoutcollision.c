#include<stdio.h>
void insert();
void display();
// void search();
int a[10];
int size;

int main()
{
    int i;
    printf("enter the size of hash table");
    scanf("%d",size);
    insert();
    display();
    // search();
    return 0;
    
}
void insert()
{
    int i,index,element;
    printf("enter the element");
     
    for(i=0;i<size;i++)
    {
        scanf("%d",&element);
        index=(element) % (size);
        a[index]=element;
    }
    
}

void display()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("\n-%d",a[i]);
    }
}

void search()
{
    int i,ele,index;
    printf("enter the elemt to be search");
    scanf("%d",ele);
    index=ele%size;



}