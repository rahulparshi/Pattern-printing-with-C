#include <stdio.h>

int main()
{
    int n, mid;
    scanf("%d", &n);
    mid = (n + 1) / 2;    
    for (int i = 1; i <= n; i++){	
    	if(i == 1){
    		printf("*");
		}else{
			printf(" ");
		}
        if (i == 1)
        {
        	for (int j = 1; j <= n - 2; j++)
                printf(" ");
        }else{
        	int ii = 0;
        	if(i < mid){
        		ii = i;
			}else{
				ii = mid;
			}
			for (int j = 1; j <= ii - 2; j++)
            	printf(" ");
            printf("*");
            for (int j = 1; j <= n - 2 * ii; j++)
                printf(" ");
            if (ii != mid)
                printf("*");
            if (ii == mid && n % 2 == 0)
                printf("*");

            for (int j = 1; j <= ii - 2; j++)
                printf(" ");
        }
		if(i == 1){
			printf("*\n");
		}else{
			printf(" \n");
		}
    }
    return 0;
}
