#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
       if(i<n/2)
       {
       if(j==i || j==n-i-1)
       {
       printf("*");
       }
       else 
       printf(" ");
       }
       else
       {
       if(j==n/2)
       {
       printf("*");
       }
       else
       printf(" ");
       }
	}
	printf("\n");
	}
}