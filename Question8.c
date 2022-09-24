#include <stdio.h>

int main() 
{
    int i,j,k;
    for(i=1;i<=4;i++){
        k=0;
        for(j=1;j<=7;j++){
            if(j>=4-i+1&&j<=4+i-1){
                if(j<=4)
                    k++;
                else
                    k--;
                    
                printf("%d",k);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}