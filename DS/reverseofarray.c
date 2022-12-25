#include <stdio.h>
void main()
{
    int a[50],i,n,t;
   printf("enter the no.of elemnts");
    scanf("%d",&n);
    printf("enter the elemnts");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // for(i=0;i<n;i++)
    // {
    //     t=a[i];
    //     a[i]=a[n-i-1];
    //     a[n-i-1]=t;
    // }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}