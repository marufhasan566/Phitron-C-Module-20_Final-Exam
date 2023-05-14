#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int minValue = INT_MAX;
    int array[n];
    int temp;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        // if (minValue > array[i])
        // {
        //     minValue = array[i];
        // }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] < array[j])
            // For descending order just put "array[i] < array[j]"" instead of 'array[i] > array[j]' inside the if condition
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", array[i]);
    // }
    // printf("\n");

    if (n % 2 == 0)
    {
        int first = (n / 2) - 1;
        int second = (n / 2);
        printf("%d %d", array[first], array[second]);
    }
    if (n % 2 == 1)
    {
        int first = ((n + 1) / 2) - 1;
        ;
        printf("%d", array[first]);
    }

    // printf("%d", minValue);
    return 0;
}