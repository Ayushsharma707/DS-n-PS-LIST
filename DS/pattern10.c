/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int i,j,k,n;
 
    for(i=1;i<=5;i++)
    {  
      
       i<=3?k++:k--;
        for(j=1;j<=5;j++)
        {
            if(j>=k&&j<=6-k)
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


