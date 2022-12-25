#include <stdio.h>

int main()
{
    int a[50],b[50],c[50],i,j,n,m,t;
   printf("enter the no.of elemnts of A");
    scanf("%d",&n);
    printf("enter the elemnts");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter the no.of elemnts of B");
    scanf("%d",&m);
    printf("enter the elemnts");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    t=n+m;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<m;j++)
    {
        c[j+n]=b[j];
    }
 for(i=0;i<t;i++)
 {
     printf("%d ",c[i]);
 }
}
