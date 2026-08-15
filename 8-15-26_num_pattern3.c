//8-15-26_num_pattern3.c
#include<stdio.h>

int main() {
    for(int i=1;i<=2;i++){
        for(int j=1;j<=4;j++){printf("%d ",j);}
        printf("\n");
        for(int k=4;k>=1;k--){printf("%d ",k);}
        printf("\n");
    }
    return 0;
}