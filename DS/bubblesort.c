#include <stdio.h>
int main()
{
    int n,i,j,a[50],temp;
	printf("enter the no. of element");
    scanf("%d",&n);
    printf("enter the orignal array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;

            }
        }
    }
    printf("sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
	return 0;
}
