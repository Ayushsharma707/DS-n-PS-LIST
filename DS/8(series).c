/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    int i,sum=0,n;
    printf("enter the no. of elemnts");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*(i+1)*(i+2);
    }
    printf("%d",sum);
}