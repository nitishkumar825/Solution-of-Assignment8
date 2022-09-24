#include <stdio.h>

int main() 
{
    int i,j,a,b;
    a=0,b=10;
    for(i=1;i<=9;i++){
        if(i%2!=0){
            a++;
            b--;
        }
        for(j=1;j<=9;j++){
            if(i%2==0)
                printf("  ");
            else{
                if(j==a||j==b||i==1)
                    printf("* ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}