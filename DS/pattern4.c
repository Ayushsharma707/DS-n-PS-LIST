/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    int i,j,n;
    printf("no. of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=(2*i-1);j++)
        {
            printf("%c ",'A'-1+j);
        }
    
        printf("\n");
    }
}