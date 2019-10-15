#include <stdio.h>
#include <math.h>
int main(void)
{
  int n;
  scanf("%d",&n);
  int front_space=0,mid_space=n-2;
  for (int row=1;row<=n;row++)
  {
    for (int i=1;i<=front_space;i++)
      printf(" ");
     printf("*");
     if (row!=(n/2)+1)
     {
       for (int i=1;i<=mid_space;i++)
         print(" ");
        printf("*");
     }
     printf("\n");
     if (row<(n/2)+1)
     {
       front_space+=1;
       mid_space=mid_space-2;
     }
     else
     {
       front_space-=1;
       mid_space=mid_space+2;
     }
   }
