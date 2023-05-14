#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1, cap = 1, star = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        if (i % 2 == 1)
        {
            for (int j = 1; j <= cap; j++)
            {
                printf("^");
            }
            cap = cap + 4;
        }
        if (i % 2 == 0)
        {
            for (int j = 1; j <= star; j++)
            {
                printf("*");
            }
            star = star + 4;
        }
        printf("\n");
    }

    return 0;
}