#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int pathan, tiger;
    int SOP = 0, SOT = 0;
    // int DRAW = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &tiger, &pathan);

        if (pathan > tiger)
        {
            SOP++;
        }
        if (tiger > pathan)
        {
            SOT++;
        }
        // if (tiger == pathan)
        // {
        //     DRAW++;
        // }
    }

    if (SOP > SOT)
    {
        printf("Pathan");
    }
    if (SOT > SOP)
    {
        printf("Tiger");
    }
    if (SOT == SOP)
    {
        printf("Draw");
    }

    // printf("%d %d", SOP, SOT);

    return 0;
}