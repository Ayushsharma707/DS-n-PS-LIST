

#include <stdio.h>
void main()
{
  int a[50],i,n,p,m;
   printf("enter the no.of elemnts");
    scanf("%d",&n);
    printf("enter the elemnts");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position");
    scanf("%d",&p);
   
    for(i=p-1;i<n-1;i++)
    {
        a[i]=a[i+1];
   
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
   
    
}

