#include <stdio.h>
int main()
{
    int n, i, j, k = 1;
    printf("enter the value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {

            if (j >= 4 - i && j <= 2 + i)
            {
                printf("%d", k);
                i >= j ? k++ : k--;
            }
        }
    }
}
