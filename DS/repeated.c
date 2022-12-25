#include<stdio.h>
void main()
{
    int i,j,a[50],n;
    printf("enter the no.of elemnts");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("repeated elemnt:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d",a[i]);
            }
            
        }
    }
}


