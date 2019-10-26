#include <stdio.h>
int main(void)
{
    int i,j,n,mid;
    char character = '*';
    scanf("%d",&n);
    mid=(n+1)/2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j!=mid&&i!=mid)
            {
                if(i==j || j==(n-i+1))
                {
                    printf("%c",character);
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if(j==i)
                {
                    printf("%c",character);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
