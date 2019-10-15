#include <stdio.h>

int main()
{
    int n, mid;
    scanf("%d", &n);
    mid = (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        printf("*");
        for (int j = 1; j < n; j++)
        {
            if (i == 1 || i == n || i == mid)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
