#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Last Row
    int lr = n - 1;
    for (int j = 0; j < m; j++)
    {
        printf("%d ", matrix[lr][j]);
    }
    printf("\n");
    // Last Column
    int lc = m - 1;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", matrix[i][lc]);
    }

    return 0;
}