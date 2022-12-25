#include<stdio.h>
int main()
{
    int i,j,min,a[50],n;
    printf("enter the no. of element");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //sorting
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i){ 
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    printf("after sorting");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}