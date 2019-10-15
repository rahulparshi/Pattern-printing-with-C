#include <stdio.h>

int main()
{
    int n, mid;
    scanf("%d", &n);
    mid = (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        printf("*");
        if (i == 1 || i > mid)
        {
            for (int j = 1; j <= n - 2; j++)
                printf(" ");
        }
        else
        {
            for (int j = 1; j <= i - 2; j++)
                printf(" ");
            printf("*");

            for (int j = 1; j <= n - 2 * i; j++)
                printf(" ");

            if (i != mid)
                printf("*");
            if (i == mid && n % 2 == 0)
                printf("*");

            for (int j = 1; j <= i - 2; j++)
                printf(" ");
        }

        printf("*\n");
    }
    return 0;
}
