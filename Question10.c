#include <stdio.h>

int main() 
{
    int i,j,k;
    for(i=1;i<=4;i++){
        k=0;
        for(j=1;j<=7;j++){
                if(j<=4)
                    k++;
                else
                    k--;

            if(j>5-i&&j<3+i)
                printf("  ");
            else
                printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}