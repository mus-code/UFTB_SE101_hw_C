//8-15-26_num_pattern4.c
#include<stdio.h>

int main() {
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){printf("%d ",j);}
        printf("\n");
    }
    return 0;
}