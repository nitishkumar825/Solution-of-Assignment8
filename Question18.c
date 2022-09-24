#include <stdio.h>

int main() 
{
    int i,j,a,b;
    a=6,b=4;
    for(i=1;i<=17;i++){
        if(i<=9){
            if(i%2!=0){
            a--;
            b++;
            }
        }
        else{
            if(i%2!=0){
            a++;
            b--;
            }
        }
        for(j=1;j<=9;j++){
            if(i%2==0)
                printf("  ");
            else{
                if(j>=a&&j<=b)
                    printf("* ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}