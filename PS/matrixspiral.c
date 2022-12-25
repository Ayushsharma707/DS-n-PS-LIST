#include <stdio.h>
int m = 0;
int n = 0;
void display(int a[m][n], int m, int n)
{
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("%d", a[i][j]);
        }
    }
}
// int spiral_matrix(int m, int n, int a[][n])
// {
//     int k = 0, l = 0, last_row = m - 1, last_col = n - 1;
//     int i, j;
//     while (k <= last_row && l <= last_col)
//     {
//         for (i = l; i <= last_col; i++)
//         {
//             printf("%d", a[k][i]);
//         }
//         k++;
//         for (i = k; i <= last_row; i++)
//         {
//             printf("%d", a[i][l]);
//         }
//         last_col--;
//         if (k <= last_row)
//         {
//             for (i = last_col; i >= l; i--)
//             {
//                 printf("%d", a[last_row][i]);
//             }
//             last_row--;
//         }
//         if (l <= last_col)
//         {
//             for (i = last_row; i >= k; i--)
//             {
//                 printf("%d", a[i][l]);
//             }
//             l++;
//         }
//     }
// }
int main()
{
    int i, j, a[50][50];
    printf("enter the rows & col");
    scanf("%d%d", &m, &n);
    printf("enter the elments of matrix");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            printf("%d", a[i][j]);
        }
    }
    printf("spiral of matrix");
    display(a, m, n);
    // printf("%d", spiral_matrix(m, n, a));
}
