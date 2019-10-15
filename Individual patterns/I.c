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
            for (int j = 1; j < mid; j++)
                printf(" ");
            printf("*");
            for (int j = mid + 1; j <= n; j++)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
