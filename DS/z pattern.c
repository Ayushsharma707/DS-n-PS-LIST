/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    int j,i,n;
    printf("enter the now of rowws");
    scanf("%d",&n);
  
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i+j==n+1 || i==n-)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    
          printf("\n");
    }
    
}
