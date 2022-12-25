#include <stdio.h>
#include <math.h>
int jumpsearch(int a[], int n, int k);
int main()
{
    int n, k, i, a[50];
    printf("enter the no. of elemnts");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // printf("%d", a[i]);
    }
    printf("enter the elmts to be searched");
    scanf("%d", &k);
    printf("elemts is present at%d", jumpsearch(a, n, k));
}
int jumpsearch(int a[], int n, int k)
{
    int i, start = 0, end = sqrt(n);
    while (a[end] < k && start < n)
    {
        start = end;
        end = end + sqrt(n);
        if (end < n - 1)
        {
            end = n;
        }
    }
    for (i = 0; i < end; i++)
    {
        if (a[i] == k)
        {
            return i;
        }
    }
    return -1;
}