

#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("enter the no. of elments");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     printf("enter new array");
     for(i=0;i<n;i++)
     {
        printf("%d ",a[i]);
     }
}