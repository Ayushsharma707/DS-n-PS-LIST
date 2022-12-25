/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int i,j,n,k;
 
    for(i=1;i<=6;i++)
    {  
      k=0;
    
        for(j=1;j<=11;j++)
        {
           j<=6?k++:k--;
            if(j>4+i|| j<=7-i)
           {
           printf("%d",k);
         
             
           }
            else
            {
                printf(" ");
            }
            
        }
       printf("\n");
        
    }
}