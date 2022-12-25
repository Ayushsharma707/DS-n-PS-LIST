#include <stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter the no. of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=2*n-1;j++)
     {
          if(j>=6-i && j<=4+i && k)
        {
            printf("*");
            k=0;
        }
        else
        {
            printf(" ");
            k=1;
        }
      }
      printf("\n");
    }
}
