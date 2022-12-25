#include<stdio.h>
int main()
{
    int i,n,a[50],p,ele;
    printf("enter the no. of");
    scanf("%d",&n);
    printf("enter the elemnts");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   n++;
    printf("enter the elemnt to be insert");
    scanf("%d",&ele);
    printf("enter the position");
    scanf("%d",&p);
  for (i = n - 1; i >= p; i--)
  {
        a[i] = a[i - 1];
       
  }   
   a[p - 1] = ele;  
     for(i=0;i<n;i++)
    {
     printf("%d",a[i]); 
    }
    

}