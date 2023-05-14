#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s, a, b, c;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &s, &a, &b, &c);
        int result = s - (a + b + c);
        array[i] = result;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}