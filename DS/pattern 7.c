/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {   
        k=i;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
           {
           printf("%d",k);
           j<4?k--:k++;
               
           }
            else
            {
                printf(" ");
            }
            
        }
    printf("\n");
        
    }
}
