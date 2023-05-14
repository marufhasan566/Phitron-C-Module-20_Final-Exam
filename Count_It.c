#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    fgets(s, 1001, stdin);
    // printf("%s",s);
    int capital = 0, small = 0, space = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        // printf("%c ", s[i]);
        int intValue = s[i];
        if (intValue >= 65 && intValue <= 90)
        {
            capital++;
        }
        if (intValue >= 97 && intValue <= 122)
        {
            small++;
        }
        if (intValue == 32)
        {
            space++;
        }
        // printf("%d\n", intValue);
    }
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);

    return 0;
}