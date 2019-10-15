#include <stdio.h>

int main()
{
    int n, mid;
    scanf("%d", &n);
    mid = (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
                printf("*");
        }
        else
        {
            for (int j = 1; j <= n - i; j++)
                printf(" ");
            printf("*");
            for (int j = 1; j < i; j++)
                printf(" ");
        }
        printf("\n");
    }

    return 1;
}
