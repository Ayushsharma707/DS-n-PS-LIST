/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int i,j,k=0,n,rows;
    printf("enter no. of rows");
    scanf("%d",&rows);
    n=(rows+1)/2;
    for(i=1;i<=rows;i++)
    {   
       if(rows%2==0)
       {
           if(i<=n)
           {
               k++;
           }
           else if(i>n+1)
           {
               k--;
           }
       }
       else
       {
           i<=n?k++:k--;
       } 
         for(j=1;j<=rows;j++)
          {
             if(j>=n+1-k&&j<=n-1+k)
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
