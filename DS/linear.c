#include<stdio.h>
void main()
{
    int i,j,k,n,x,a[50],c=0;
    printf("enter the elements of array");
    scanf("%d",&n);
    printf("enter the elemnts of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elemnts to be searched");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
            if(x==a[i])
            {
                c=c+1;
               printf("postion=%d\n",i+1);
            }
            
    }
    if(c>0)
    {
        printf("element exist %dtimes\n",c);
    }
    else
    {
        printf("elemnt not found");
    }
}