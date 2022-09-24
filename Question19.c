#include <stdio.h>

int main() 
{
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=19;j++){
            if((j>=4-i&&j<=6+i)||(j>=14-i&&j<=16+i))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for(;i<=4;i++){
        for(j=1;j<=6;j++)
            printf("* ");
        printf("   MySirG   ");
        for(j=13;j<=19;j++)
            printf("* ");
        printf("\n");
    }
    for(;i<=13;i++){
        for(j=1;j<=23-i;j++){
            if(j>=i-3)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}