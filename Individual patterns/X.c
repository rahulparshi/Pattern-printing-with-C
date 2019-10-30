#include <stdlib.h>
#include <stdio.h>

int main() {

    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j = 0;j<n;j++){
            if(abs((n-1)-i) == j || i == j)printf("*");
           
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
