#include<stdio.h>

int main() {
    int n=7;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=n;j++){
            if(i==1)printf("*");

            else if(j<=5-i||j>=3+i)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
