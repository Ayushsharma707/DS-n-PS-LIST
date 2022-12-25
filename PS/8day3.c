#include<stdio.h>
int main()
{
    int n,t,i,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    printf("Sum of the series");
    for(i=1;i<=n;i++)
    {
        sum=sum+i*(i+1)*(i+2);
    } 
    printf(" %d",sum);
}