#include <stdio.h>
int main()
{
    int a[100],b[100],c[100],n,m,co=0;
    printf("Enter number of elements of first array\n");
    scanf("%d",&n);
    printf("Enter the number of elements in second array\n");
    scanf("%d",&m);
    int i;
    printf("Enter the elments of the first array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int k,j;
    printf("Enter the element of the second array\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j]){
                
                k++;
                break; 
            }
        }    
           if(k==1){
                c[i]=b[i];
                co++;} 
    }
    printf("Array after intersection is\n");
    for(i=0;i<co;i++)
        printf("%d\n",c[i]);
    return 0;
}