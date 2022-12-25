#include<stdio.h>
int main(){
    int n,i,a[50];
      int temp;
    printf("enter the elemnt");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      
        temp=a[0];
        a[0]=a[n];
        a[n]=temp;
        printf("%d",a[i]);
    }
        for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }


}