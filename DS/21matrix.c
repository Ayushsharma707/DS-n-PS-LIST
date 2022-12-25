#include<stdio.h>
int main()
{
    int a[50][50];
    int i,j,m,n,temp;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("the orignal matrix");
   for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }
 
    for(i=0;i<m;i++)
    {
        for(j=0;j<i;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
   printf("matrix after transpose");
   for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }

}