
#include <stdio.h>
void main()
{
    int a[50],i,n,sum=0,som,m;
   printf("enter the no.of elemnts");
    scanf("%d",&n);
    printf("enter the elemnts");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=a[n-1];
    som=(l)*(l+1)/2;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
  
    printf("missing number\n");
    m=som-sum;
   printf("%d",m);
}