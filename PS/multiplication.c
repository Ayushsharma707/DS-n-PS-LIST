#include<stdio.h>
void main()
{
    int i,j,a[100][100],b[100][100],c[100][100],m,n,k,p,q;
    printf("enter the no. of rows and columns\n");
    scanf("%d%d",&m,&n);
    printf("enter array no. 1:-");
    if(n==p)
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter array no. 2:-");
   for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        k=0;
        for(k=0;k<n;k++){
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }}
     for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("\n%d",c[i][j]);
        }
    }
    }
}
