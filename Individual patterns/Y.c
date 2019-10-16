#include <stdio.h>
int main()
{
   int i,n,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i<=n/2&&(i==j||i+j==n-1)||(i>n/2&&j==n/2))
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
           
       }
       printf("\n");
   }
}
