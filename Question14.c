#include <stdio.h>

int main() 
{
    int i,j,x;
    for(i=1;i<=9;i++){
        if(i<9){
            for(j=1;j<=9;j++){
                if(i%2==0||j%2==0)
                        printf("  ");
                else{
                    if (j > i)
                        printf("  ");
                    else
                        if (j > 1 && j < i)
                            printf("  ");
                        else
                            printf("* ");
            }
        }
        printf("\n");
        }
        else
            for(j=1;j<=9;j++)
                if(j%2==0)
                    printf("  ");
                else
                    printf("* ");
    }
    return 0;
}