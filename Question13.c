#include <stdio.h>

int main() 
{
    int i,j,k;
    for(i=1;i<=7;i++){
        k=64;
        for(j=1;j<=13;j++){
            if(j<=7)
                k++;
            else
                k--;

            if(j>8-i&&j<6+i)
                printf("  ");
            else
                printf("%c ",k);
        }
        printf("\n");
    }
    return 0;
}