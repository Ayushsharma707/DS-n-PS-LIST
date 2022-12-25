#include <stdio.h>
int main()
{
    int i, j, n, t, m, a[50][50];
    printf("enter the no. of rows");
    scanf("%d", &n);
    printf("enter the no. of col");
    scanf("%d", &m);
    printf("enter the elments of matrix");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

            scanf("%d", &a[i][j]);
        }
        
    }
     for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

           printf("%d\t", a[i][j]);
        }
        printf("\n");
       
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)

        {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m / 2; j++)
        {
            t = a[i][j];
            a[i][j] = a[i][m - j - 1];
            a[i][m - j - 1] = t;
        }
    }

    printf("matrix after roation");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}