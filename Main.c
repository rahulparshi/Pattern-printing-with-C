#include <stdio.h>

int main()
{
    int n, mid, l;
    //n- Number of rows in the output
    //l- input length
    scanf("%d %d\n", &n, &l);
    char *a = (char *)malloc(l * sizeof(char));
    for (int i = 0; i < l; i++)
        scanf("%c", &a[i]);
    mid = (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < l; k++)
        {
            switch (a[k])
            {
            case 'E':
                printf("*");
                for (int j = 1; j < n; j++)
                {
                    if (i == 1 || i == n || i == mid)
                        printf("*");
                    else
                        printf(" ");
                }
                break;
            case 'F':
                printf("*");
                for (int j = 1; j < n; j++)
                {
                    if (i == 1 || i == mid)
                        printf("*");
                    else
                        printf(" ");
                }
                break;
            case 'I':
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
                break;
            case 'L':
                printf("*");
                for (int j = 1; j < n; j++)
                {
                    if (i != n)
                        printf(" ");
                    else
                        printf("*");
                }
                break;
            case 'M':
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
                printf("*");
                break;
            case 'Z':
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
                break;
            case 'Y':
                for(i=0;i<n;i++)
                {
                    for(j=0;j<n;j++)
                    {
                       if(i<n/2)
                       {
                          if(j==i || j==n-i-1)
                             printf("*");
                          else 
                             printf(" ");
                        }
                        else
                        {
                           if(j==n/2)
                              printf("*");
                           else
                               printf(" ");
                        }
                    }
                    printf("\n");
                }

            }
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}