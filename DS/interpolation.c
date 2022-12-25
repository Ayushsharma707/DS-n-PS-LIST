#include <stdio.h>
int interpolsearch(int a[], int n, int k);
int main()
{
    int n, a[50], k, i;
    printf("enter the no.elements");
    scanf("%d", &n);
    printf("enter the elemnt to be searched");
    scanf("%d", &k);
    printf("enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("elememt present at%d", interpolsearch(a, n, k));
}
int interpolsearch(int a[], int n, int k)
{
    int est, r, l;
    l = 0;
    r = n - 1;

    while (l <= r)
    {
        est = l + ((k - a[l]) / (a[r] - a[l])) * (r - l);
        if (a[est] == k)
        {
            return est;
        }
        else if (a[est] > k)
        {
            r = est - 1;
        }
        else
        {
            l = est + 1;
        }
    }
    return -1;
}