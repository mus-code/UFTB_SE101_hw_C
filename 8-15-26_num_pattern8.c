//8-15-26_num_pattern8.c
#include<stdio.h>

int main() {
    int n=1;
    for(int i=4;i>=1;i--){
        for(int k=4;k>i;k--){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",n);
        }
        n++;
        printf("\n");
    }
    return 0;
}