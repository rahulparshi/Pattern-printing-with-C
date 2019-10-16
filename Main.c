#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, mid, l;
    char character = '*'; //instead of hard coding star character used a varaible.
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
                printf("%c", character);
                for (int j = 1; j < n; j++)
                {
                    if (i == 1 || i == n || i == mid)
                        printf("%c", character);
                    else
                        printf(" ");
                }
                break;
            case 'F':
                printf("%c", character);
                for (int j = 1; j < n; j++)
                {
                    if (i == 1 || i == mid)
                        printf("%c", character);
                    else
                        printf(" ");
                }
                break;
            case 'I':
                if (i == 1 || i == n)
                {
                    for (int j = 1; j <= n; j++)
                        printf("%c", character);
                }
                else
                {
                    for (int j = 1; j < mid; j++)
                        printf(" ");
                    printf("%c", character);
                    for (int j = mid + 1; j <= n; j++)
                        printf(" ");
                }
                break;
            case 'L':
                printf("%c", character);
                for (int j = 1; j < n; j++)
                {
                    if (i != n)
                        printf(" ");
                    else
                        printf("%c", character);
                }
                break;
            case 'M':
                printf("%c", character);
                if (i == 1 || i > mid)
                {
                    for (int j = 1; j <= n - 2; j++)
                        printf(" ");
                }
                else
                {
                    for (int j = 1; j <= i - 2; j++)
                        printf(" ");
                    printf("%c", character);

                    for (int j = 1; j <= n - 2 * i; j++)
                        printf(" ");

                    if (i != mid)
                        printf("%c", character);
                    if (i == mid && n % 2 == 0)
                        printf("%c", character);

                    for (int j = 1; j <= i - 2; j++)
                        printf(" ");
                }
                printf("%c", character);
                break;
                case 'Y':
                for(int j=1;j<=n;j++)
                {
                   if(i<=mid)
                   {
                       if(j==i || j==n-i+1)
                         printf("%c",character);
                       else 
                         printf(" ");
                    }
                    else
                    {
                    if(j==mid)
                       printf("%c",character);
                    else
                       printf(" ");
                    }
                }
                break;  
            case 'Z':
                if (i == 1 || i == n)
                {
                    for (int j = 1; j <= n; j++)
                        printf("%c", character);
                }
                else
                {
                    for (int j = 1; j <= n - i; j++)
                        printf(" ");
                    printf("%c", character);
                    for (int j = 1; j < i; j++)
                        printf(" ");
                }
                break;
            }
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}